#include<bits/stdc++.h>
using namespace std;

void interleaveQueue(queue<int> &first){
  queue<int> second;

  //PUSH FIRST HALF OF FIRST QUEUE IN SECOND HALF
  int size = first.size();
  for(int i = 0; i < size/2; i++){
    int temp = first.front();
    first.pop();

    second.push(temp);
  }

  //merge bot the halfes
  //into the original queue
  for(int i = 0; i<size/2; i++){
    int temp = second.front();
    second.pop();
    first.push(temp);
    temp = first.front();
    first.pop();
    first.push(temp);
  }

}


  int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // reverseQueue(q);
    interleaveQueue(q);
    cout << "printing queue" << endl;

    while (!q.empty()) {
      int element = q.front();
      q.pop();
      cout << " " << element;
    }

    return 0;
  }
