// see dfs sloution on leetcode 
//this is bfs solution 
//but this code is not running for when difference is 0 {111, 222, 333}

#include <iostream> // Add this line to include the necessary library for cout and endl
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
  vector<int> numsSameConsecDiff(int n, int k) {
    vector<int> res;
    queue<int> q;

    // Add single digit numbers (1-9) to the queue as starting points
    for (int i = 1; i <= 9; i++) {
      q.push(i);
    }

    // Perform BFS
    while (!q.empty()) {
      int curr = q.front();
      q.pop();
      int lastdigit = curr % 10;

      // If the last digit + k is within range, add the new number to the queue
      if (lastdigit + k <= 9)
        q.push(curr * 10 + lastdigit + k);
      // If k is not 0 and the last digit - k is within range, add the new number to the queue
      if (k != 0 && lastdigit - k >= 0)
        q.push(curr * 10 + lastdigit - k);

      // If the current number has n digits, add it to the result
      if (to_string(curr).size() == n)
        res.push_back(curr);
    }

    return res;
  }
};

int main() {
  int n, k;
  cout << "Enter the value of n (number of digits): ";
  cin >> n;
  cout << "Enter the value of k (consecutive difference): ";
  cin >> k;

  Solution sol;
  vector<int> result = sol.numsSameConsecDiff(n, k);
  cout << "Numbers with consecutive difference " << k << " of length " << n << " are: ";
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
