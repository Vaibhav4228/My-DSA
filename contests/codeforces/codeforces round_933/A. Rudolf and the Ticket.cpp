#include <iostream>
#include <vector>

using namespace std;

int countValidCombinations(int n, vector<int>& leftCoins, int m, vector<int>& rightCoins, int k) {
  int count = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (leftCoins[i] + rightCoins[j] <= k) {
        count++;
      }
    }
  }
  return count;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> leftCoins(n);
    for (int i = 0; i < n; ++i) {
      cin >> leftCoins[i];
    }

    vector<int> rightCoins(m);
    for (int i = 0; i < m; ++i) {
      cin >> rightCoins[i];
    }

    int validCombinations = countValidCombinations(n, leftCoins, m, rightCoins, k);
    cout << validCombinations << endl;
  }

  return 0;
}
