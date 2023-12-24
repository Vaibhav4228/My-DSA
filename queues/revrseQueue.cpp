#include <bits/stdc++.h>
using namespace std;
void reverseQueue (queue<int>&q){
  stack<int> s;
  //one by one queue se elmnt lo aur stack mein daalo

  while(!q.empty()){
    int frontElement = q.front();
    q.pop();

    s.push(frontElement);
  }

  //one by one stack se lo aur queue mein daalo
  while (!s.empty()){
    int element = s.top();
    s.pop();

    q.push(element);

  }
}

//using recurses
void reverse(queue<int>& q, int temp){
  //
  if (q.empty())
{
  return;
}

int element = q.front();
q.pop();
reverse(q);
q.push(temp);
}


int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  // reverseQueue(q);
  reverse(q);
  cout<< "printing queue"<<endl;

  while(!q.empty()){
    int element = q.front();
    q.pop();
    cout<< " "<< element;
  }

  return 0;
}