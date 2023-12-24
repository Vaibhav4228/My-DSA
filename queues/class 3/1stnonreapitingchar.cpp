// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   string str = "aabc";
//   queue<char> q;
//   int freq[26] = {0};

//   for (int i = 0; i < str.size(); i++) {
//     char ch = str[i];
//     freq[ch - 'a']++;
//     q.push(ch);
//   }

//   while (!q.empty()) {
//     char frontCharacter = q.front();
//     if (freq[frontCharacter - 'a'] > 1) {
//       q.pop();
//     }
//     else {
//       cout << frontCharacter << "->";
//       q.pop();
//       break;
//     }
//   }

//   if (q.empty()) {
//     cout << "#" << "->";
//   }

//   return 0;
// }
THIS CODE IS WRONG SEE COPY FOR GFG CODE