#include <bits/stdc++.h>
using namespace std;

void reverse1stKqueue(queue<int>& q, int k) {  //push first k elemtn in stack
  stack<int> s;
  int n = q.size();
  if(k>n || k == 0){
    return;
  }
  for(int i=0; i<k; i++){
   int temp = q.front();
   q.pop();
   s.push(temp);

  }
 

  // push all k element into queue
  while(!s.empty()){
    int temp = s.top();
    s.pop();
    q.push(temp);
  }


  // pop and push (n-k) element
  for(int i = 0; i<(n-k); i++){
    int temp = q.front();
    q.pop();
    q.push(temp);
  }
};
  int main() {
    queue<int> q;
    q.push(111);
    q.push(222);
    q.push(300);
    q.push(40);
    // reverseQueue(q);
    int k = 3;
    reverse1stKqueue(q, k);
    cout << "printing queue" << endl;

    while (!q.empty()) {
      int element = q.front();
      q.pop();
      cout << " " << element;
    }

    return 0;
  }
