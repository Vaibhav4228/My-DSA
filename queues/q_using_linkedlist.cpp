// #include<bits/stdc++.h>
// using namespace std;

// class QueueNode{
//   public:

//     int val;
//    QueueNode *next;
//    QueueNode(int data) {
//     val = data;
//     next = NULL;
//    }
// };
// QueueNode *front = NULL, *rare = NULL;

// class Queue{
//   private:

//   int size() = 0;
//   bool Empty();
//   void Enqueue(int value);
//   void Dequeue();
//   int Peek(); //which is top element of queue

// };

// bool Queue :: empty()
// {
//   if (empty()){
//     return -1;
//   }
//   else {
//     return front->val;
//   }
// }

//  void Queue::enqueue(value){
//   QueueNode*Temp;
//   temp = new QueueNode(value);
//   if(temp == NULL) return cout<<"queue is full"<<endl;

//   else 
//   {
//     if(front == NULL){
//       front = temp;
//       rare = temp;

//     }
//     else {
//        rare->next = temp;
//        rare = temp;
//     }
//     cout<<value<<"inserted into queue"<<endl;
//     size++;
//   }
//  }

//  void Queue::dequeue(){
//   if(front == NULL){
//     cout<<"queue is empty"<<endl;

//   }
//    else 
//       cout<< front->val <<"removed value"<<endl;
//       QueueNode *Temp = front->next;
//       delete Temp;
//       size--;
//  }

//  int main() {
//   Queue q;
//   q.enqueue(10);
//   q.enqueue(20);
//   q.enqueue(30);
//   q.enqueue(40);
//   q.enqueue(50);

//   cout<<"the size of queue is "<<q.size()<<endl;
//   cout<<"the peek element is "<<q.peek()<<endl;
//   return 0;
//  }
#include<bits/stdc++.h> 
using namespace std;

class QueueNode
{
 public: 
    int val;
    QueueNode *next;
    QueueNode(int data)
    {
       val = data;
       next = nullptr;
    }
};  
QueueNode *Front = nullptr, *Rare = nullptr;

class Queue
{
public:
    int size = 0;
    bool Empty();
    void Enqueue(int value);
    void Dequeue();
    int Peek();
};  
bool Queue ::  Empty()
{
    return Front == nullptr;
}  
int Queue :: Peek()
{
    if(Empty())  
     {  cout<<"Queue is Empty"<<endl;
        return -1;
     } 
    else 
      return Front->val;
}   
void Queue :: Enqueue(int value)
{
    QueueNode *Temp;
    Temp = new QueueNode(value); 
    if (Temp == nullptr)  //When heap exhausted 
        cout << "Queue is Full" << endl;
    else
    {
        if (Front == nullptr)
        {
            Front = Temp;
            Rare = Temp;
        } 
        else
        {
            Rare->next = Temp;
            Rare = Temp;
        }
        cout<<value <<" Inserted into Queue "<<endl;
        size++;
    } 
}      
void Queue :: Dequeue() 
{
    if (Front == nullptr) 
        cout << "Queue is Empty" << endl;
    else
    { 
        cout<<Front->val <<" Removed From Queue"<<endl;
        QueueNode *Temp = Front;
        Front = Front->next;
        delete Temp;
        size--;
    }  
}   
int main()

{
    Queue Q;
    Q.Enqueue(10);
    Q.Enqueue(20);
    Q.Enqueue(30);
    Q.Enqueue(40);
    Q.Enqueue(50);
    Q.Dequeue();
    Q.Dequeue();
    cout<<"The size of the Queue is "<<Q.size<<endl;
    cout<<"The Peek element of the Queue is "<<Q.Peek()<<endl;
    return 0;
}   