// // // here question - https://codeforces.com/contest/1930



// // #include <bits/stdc++.h>

// // using namespace std;

// // int main() {
// //   int t;
// //   cin >> t;

// //   while (t--) {
// //     int n;
// //     cin >> n;

// //     vector<int> v(2 * n);
// //     for (auto& e : v)     cin >> e;

// //     sort(v.begin(), v.end());

// //     int ans = 0;

// //     for (int i = 0; i < 2 * n; i += 2)
// //       ans += v[i];

// //     cout << ans << "\n";
// //   }
// // }

// // //------------------------SECOND Question------------------------
// // #include <bits/stdc++.h>

// // using namespace std;

// // int main() {
// //   int t;
// //   cin >> t;

// //   while (t--) {
// //     int n;
// //     cin >> n;

// //     set<int> st;
// //     for (int i = 1; i <= n; i++)
// //       st.insert(i);

// //     for (int i = 1; i <= n; i++)
// //     {
// //       if (i % 2)
// //       {
// //         cout << *st.begin() << " ";
// //         st.erase(st.begin());
// //       }
// //       else
// //       {
// //         cout << *st.rbegin() << " ";
// //         st.erase(--st.end());
// //       }
// //     }

// //     cout << "\n";
// //   }
// // }
// // //-------------------------3rd question------------------------
// // #include <bits/stdc++.h>

// // using namespace std;

// // int main() {
// //   int t;
// //   cin >> t;

// //   while (t--) {
// //     int n;
// //     cin >> n;

// //     vector<int> a(n);
// //     for (auto& e : a)     cin >> e;

// //     for (int i = 0; i < n; i++)
// //       a[i] += i + 1;

// //     sort(a.rbegin(), a.rend());

// //     int val = 2e9;

// //     for (auto e : a)
// //     {
// //       if (e >= val)
// //       {
// //         cout << val - 1 << " ";
// //         val--;
// //       }
// //       else
// //       {
// //         cout << e << " ";
// //         val = e;
// //       }
// //     }

// //     cout << "\n";
// //   }
// // }
// // //----------------------4th question-----------------------
// // #include <bits/stdc++.h>

// // using namespace std;

// // int main() {
// //   int t;
// //   cin >> t;

// //   while (t--) {
// //     int n;
// //     string s;
// //     cin >> n >> s;

// //     int ans = 0;

// //     for (int i = 0; i < n; i++)
// //     {
// //       for (int j = i; j < n; j++)
// //       {
// //         for (int k = i; k <= j; k++)
// //         {
// //           if (s[k] == '0')
// //             continue;

// //           ans++;
// //           k += 2;
// //         }
// //       }
// //     }

// //     cout << ans << "\n";
// //   }
// //   }

// #include <bits/stdc++.h>
// using namespace std;

// void Vaibhav() {
//   int n;
//   cin >> n;

//   string str;
//   cin >> str;

//   int count = -1;
//   for (int i = 1; i < n; i++) {
//     if (str[i - 1] == str[i] && str[i] == '*') {
//       count = i;
//       break;
//     }
//   }

//   if (count == -1)
//     count = n;

//   int ans = 0;
//   for (int i = 0; i < count; i++)
//     if (str[i] == '@')
//       ans++;

//   cout << ans << endl;


// }

// int main() {
//   Vaibhav();
//   return 0;
// }
