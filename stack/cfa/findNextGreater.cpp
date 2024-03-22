#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& vib, int n) {
  stack<int> st;
  vector<int> nge(n, -1);

  for (int i = 0; i < n; i++) {
    while (!st.empty() && vib[i] > vib[st.top()]) {
      nge[st.top()] = vib[i];
      st.pop();
    }
    st.push(i);
  }
  return nge;
}

int main() {
  int n;
  cin >> n;

  vector<int> vib;
  for (int i = 0; i < n; i++) {
    int inp;
    cin >> inp;
    vib.push_back(inp);
  }

  vector<int> ans = solve(vib, n);
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
