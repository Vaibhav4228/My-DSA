/*given an array of N integers. GIven Q quesries ans in each query given L and R and in which sum of array
from index L to R (L, R included )
6 size array - (3 6 2 8  9 2) there is 4 question
i need to find sum between 2 and 3 - 2 +8, 4 6,
Tc = O(N*Q) */
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int a[N];
long long pf[N];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) { // Start the loop from 1, assuming 1-based indexing
    cin >> a[i];
    pf[i] = pf[i - 1] + a[i];
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << pf[r] - pf[l - 1] << endl;
  }

  return 0;
}
