#include <climits>
#include <algorithm> // For std::max

struct Info {
    int maxVal;
    bool isHeap;
};

struct Node {
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:
    Info checkMaxHeap(Node* root) {
        if (root == nullptr) {
            Info temp;
            temp.maxVal = INT_MIN;
            temp.isHeap = true;
            return temp;
        } else {
            Info left = checkMaxHeap(root->left);
            Info right = checkMaxHeap(root->right);

            Info ans;
            ans.maxVal = std::max(root->data, std::max(left.maxVal, right.maxVal));
            ans.isHeap = (root->data >= left.maxVal && root->data >= right.maxVal && left.isHeap && right.isHeap);

            return ans;
        }
    }

    bool isHeap(Node* root) {
        if (root == nullptr)
            return true;
        Info result = checkMaxHeap(root);
        return result.isHeap;
    }
};
