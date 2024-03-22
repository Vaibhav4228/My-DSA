#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void in(node* root, node*& prev) {
    if (!root) return;
    in(root->left, prev);
    prev->left = nullptr;
    prev->right = root;
    prev = root;
    in(root->right, prev);
}

node* flattenBST(node* root) {
    if (!root) return nullptr;
    node* dummy = new node(-1);
    node* prev = dummy;
    in(root, prev);
    prev->left = prev->right = nullptr;
    root = dummy->right;
    delete dummy;
    return root;
}

int main() {
    // Example Usage
    node* root = new node(5);
    root->left = new node(3);
    root->right = new node(7);
    root->left->left = new node(2);
    root->left->right = new node(4);
    root->right->left = new node(6);
    root->right->right = new node(8);

    node* head = flattenBST(root);
    // Now, the binary tree is converted to a linked list, you can traverse it accordingly.
    while (head) {
        cout << head->data << " ";
        head = head->right;
    }
    return 0;
}
