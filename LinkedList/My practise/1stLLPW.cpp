#include<bits/stdtr1c++.h>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
//insertion at head
void intsertAtHead(Node* &head, int val){
   Node* n = new Node(val);
   n->next= head;
   head = n;

}
//insertion at back
void intsertBack(Node* &head, int val){
    Node* n = new Node(val);

    Node* temp = head;
    while(temp->next!=NULL){   //tc ->O(n)
        temp = temp->next;
    }
    //reaced last node
    temp->next = n;

}
//insert at middle
void intsertMiddle(Node* &head, int val){
    if (pos == 0){
        intsertAtHead(head, val);
        Node* temp = head;
        int current_pos = 0;
        while(currrent_pos!= pos-1){
            temp=temp->next;
            current_pos++;
        }
        
    }
     n->next=temp->next;
        temp->next= n;
}

void print(Node* head){
    Node*temp =head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){

    Node*head = NULL;
    intsertAtHead(head, 2);
    print(head);
    intsertAtHead(head,5);
    print(head);
    intsertBack(head,96);
    print(head);
    intsertMiddle(head,88);
    print(head);

    return 0;
}
