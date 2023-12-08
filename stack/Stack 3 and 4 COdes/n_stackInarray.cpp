#include <iostream>
#include <vector>

using namespace std;

class NStacks {
private:
  int n;
  int size;
  vector<int> arr;
  vector<int> top;

public:
  NStacks(int numStacks, int stackSize) : n(numStacks), size(stackSize) {
    arr.resize(n * size, 0);
    top.resize(n, -1);

    for (int i = 0; i < n; ++i) {
      top[i] = i * size / n - 1;
    }
  }

  bool isFull(int stackNum) {
    return top[stackNum] == (stackNum + 1) * size - 1;
  }

  bool isEmpty(int stackNum) {
    return top[stackNum] == -1;
  }

  bool push(int stackNum, int value) {
    if (!isFull(stackNum)) {
      top[stackNum]++;
      arr[stackNum * size + top[stackNum]] = value;
      return true;
    }
    else {
      return false;
    }
  }

  int pop(int stackNum) {
    if (!isEmpty(stackNum)) {
      int value = arr[stackNum * size + top[stackNum]];
      top[stackNum]--;
      return value;
    }
    else {
      return -1;
    }
  }
};

int main() {
  int N, S, Q;
  cin >> N >> S >> Q;

  NStacks stacks(N, S);

  for (int i = 0; i < Q; ++i) {
    int P;
    cin >> P;

    if (P == 1) {
      int X, M;
      cin >> X >> M;
      cout << (stacks.push(M - 1, X) ? "True" : "False") << endl;   
    }
    else if (P == 2) {
      int M;
      cin >> M;
      int result = stacks.pop(M - 1);  
      if (result != -1) {
        cout << result << endl;
      }
    }
  }

  return 0;
}
