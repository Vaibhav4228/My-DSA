// #include <iostream>
// #include <queue>
// using namespace std;

// class Node {
// public:
//   int data;
//   Node* left;
//   Node* right;

//   Node(int value) {
//     this->data = value;
//     this->left = NULL;
//     this->right = NULL;
//   }
// };

// void printTree(Node* root, int space = 0, int count = 10) {
//   if (root == NULL) {
//     return;
//   }

//   space += count;

//   printTree(root->right, space);
//   cout << endl;

//   for (int i = count; i < space; i++) {
//     cout << " ";
//   }
//   cout << root->data << "\n";

//   printTree(root->left, space);
// }

// Node* insertIntoBst(Node* root, int data) {
//   if (root == NULL) {
//     root = new Node(data);
//     return root;
//   }

//   if (data > root->data) {
//     root->right = insertIntoBst(root->right, data);
//   }
//   else {
//     root->left = insertIntoBst(root->left, data);
//   }

//   return root;
// }

// void createBST(Node*& root) {
//   cout << "Enter data (-1 to stop):" << endl;
//   int data;
//   cin >> data;

//   while (data != -1) {
//     root = insertIntoBst(root, data);
//     cin >> data;
//   }
// }

// int main() {
//   Node* BST = NULL;
//   createBST(BST);

//   cout << "BST Tree:" << endl;
//   printTree(BST);

//   return 0;
// }

//wothout spaces
#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
  int data;
  Node* left;
  Node* right;

  Node(int value) {
    this->data = value;
    this->left = NULL;
    this->right = NULL;
  }
};

void printTree(Node* root) {
  if (root == NULL) {
    return;
  }

  printTree(root->left);
  cout << root->data << " ";
  printTree(root->right);
}

Node* insertIntoBst(Node* root, int data) {
  if (root == NULL) {
    root = new Node(data);
    return root;
  }

  if (data > root->data) {
    root->right = insertIntoBst(root->right, data);
  }
  else {
    root->left = insertIntoBst(root->left, data);
  }

  return root;
}

void createBST(Node*& root) {
  cout << "Enter data (-1 to stop):" << endl;
  int data;
  cin >> data;

  while (data != -1) {
    root = insertIntoBst(root, data);
    cin >> data;
  }
}

int main() {
  Node* BST = NULL;
  createBST(BST);

  cout << "BST Tree: ";
  printTree(BST);

  return 0;
}

