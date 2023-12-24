#include <bits/stdc++.h>
using namespace std;

class Cqueue{
  public: 
   int* arr;
   int size;
   int front;
   int rear;
   Cqueue(int size){
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;

   }

   void push(int val){
    //overflow overflow
    //empty
    //circular
    //normal form
    if(front == 0 && rear == size-1 || (rear == front -1)){
      cout<<"overflow"<<endl;

    }
    else if(front == -1 && rear == -1){
      front++;
      rear++;
      arr[front] = val;
    }
    else if (rear == size-1 && front !=0){
      rear = 0;
      arr[rear] = val;
    }
    else {
      rear++;
      arr[rear]= val;
    }

    //empty
    //circular
    //normal form
    
   }
   void pop (){
     //underflow
     //empty
     //circular
     //normal form
     if(front == -1 && rear == -1){
      cout<<"underflow"<<endl;
     }
     else if (front == rear){
      arr[front] = -1;
      front = -1;
      rear = -1;
     }
     else if(front == size-1){
      arr[front] = -1;
      front = 0;
     }
     else {
      arr[front] = -1;
      front++;
     }
   }
   void print(){
    cout<<"front: " <<front<<"rear: "<< rear<<endl;
    cout<<"printing queue"<<endl;
    for (int i=0; i<size; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
};

int main(){
  Cqueue q(5);
  q.print();

  q.push(10);
  q.print();

  q.push(20);
  q.print();

  q.push(30);
  q.print();

  q.push(40);
  q.print();

  q.push(50);
  q.print();

  q.push(60);
  q.print();

  q.push(70);
  q.print();

  q.pop();
  q.print();

  return 0;
}
