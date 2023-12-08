#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
  int* arr;
  int size;
  int front;
  int rear;

  Queue(int size) {
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
  }

  void push(int val) {
    // check full
    if (rear == size - 1) {
      cout << "overflow" << endl;
      return;
    }
    else if (front == -1 && rear == -1) {
      // empty case
      front++;
      rear++;
      arr[rear] = val;
    }
    else {
      // normal case
      rear++;
      arr[rear] = val;
    }
  }

  void pop() {
    // underflow
    if (front == -1 && rear == -1) {
      cout << "underflow" << endl;
      return;
    }
    else if (front == rear) {
      // empty case -> single
      front = -1;
      rear = -1;
    }
    else {
      // normal case
      front++;
    }
  }


  bool isEmpty() {
    return (front == -1 && rear == -1);
  }
  

  int getFront() {
    if (front == -1) {
      cout << "no element" << endl;
      return -1;
    }
    else return arr[front];
  }

  void print() {
    if (front == -1) {
      cout << "Queue is empty" << endl;
      return;
    }
    cout << "Printing queue: ";
    for (int i = front; i <= rear; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  int getSize() {
    if (front == -1) {
      return 0;
    }
    return rear - front + 1;
  }
};

int main() {
  // creation
  Queue q(5);
 q.print();

  q.push(10);
  q.print();


  q.push(11);
  q.print();
  

  q.push(1);
  q.print();
  

  q.push(16);
  q.print();
  

  q.push(15);
  q.print();
  cout << "size of queue: " << q.getSize() << endl;

  q.pop();
  q.print();

  q.pop();
  q.print();

  cout<< "size of queue: " << q.getSize() << endl;
  cout<<" queue os empty or not: "<< q.isEmpty() <<endl;

  return 0;
}
