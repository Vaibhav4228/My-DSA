#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node*right;

    node(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;

    }
};

node* buildTree(int data){

    if(data == -1){
        return NULL;

        //1 case
        node* root = new node(data);

        int leftData;
        cout<< "enter data for right child"<< data<< endl;

        int rightData;
        cout<< "enter data for right child"<< data<< endl;

        cin>>rightData;
        root -> right = buildTree(rightData);


        return root;

    }
    int main(){
        node* root;
        
    }
}

