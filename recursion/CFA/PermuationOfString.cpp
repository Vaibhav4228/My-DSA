#include<bits/stdc++.h>
using namespace std;

void solve(int ind, string& ans, string s, map<int, int>& track) {
  if (ind == s.size()) {
    cout << ans << endl;
    return;
  }
  for (int i = 0; i < s.size(); i++) {
    if (track[i] == 0) {
      ans += s[i];
      track[i] = 1;
      solve(ind + 1, ans, s, track);
      ans.pop_back();
      track[i] = 0;
    }
  }
}


int main() {
  string s;
  cin >> s;
  string ans = "";
  map<int, int> track;
  solve(0, ans, s, track);
  return 0;
}
//this code generates the all possible combinations of the string 
