// //1st question solution

// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // // Function to find the minimum number of coins required
// // int minCoins(int n) {
// //     // Triangular numbers: 1, 3, 6, 10, 15
// //     vector<int> coins = {1, 3, 6, 10, 15};
    
// //     int count = 0;
    
// //     // Start with the largest coin and greedily choose coins
// //     for (int i = coins.size() - 1; i >= 0; --i) {
// //         while (n >= coins[i]) {
// //             n -= coins[i];
// //             ++count;
// //         }
// //     }
    
// //     return count;
// // }

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n;
// //         cin >> n;

// //         // Output the minimum number of coins required for each test case
// //         cout << minCoins(n) << endl;
// //     }

// //     return 0;
// // }


// /// 2nd question
// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_N = 10000001;

// int fun(int i, vector<int>& coins, int target, vector<vector<int>>& dp) {
//   if (i == 0) {
//     if (target % coins[i] == 0) {
//       return target / coins[i];
//     }
//     else {
//       return 1e9;
//     }
//   }
//   if (dp[i][target] != -1) {
//     return dp[i][target];
//   }
//   int notTake = fun(i - 1, coins, target, dp);
//   int take = 1e9;
//   if (coins[i] <= target) {
//     take = 1 + fun(i, coins, target - coins[i], dp);
//   }
//   return dp[i][target] = min(take, notTake);
// }

// int main() {
//   int t;
//   cin >> t; // Number of test cases

//   vector<int> coins = { 1, 3, 6, 10, 15 };
//   int n = coins.size();
//   vector<vector<int>> dp(n, vector<int>(MAX_N, -1));

//   while (t--) {
//     int N;
//     cin >> N; // Target value
//     int res = 0;
//     if (N >= 1e8)
//     {
//       vector<int> ans;
//       while (N > 0) {

//         for (int i = 4; i >= 0; i--)
//         {
//           if (coins[i] <= N)
//           {
//             ans.push_back(coins[i]);
//             N = N - coins[i];
//             break;
//           }
//         }
//       }
//       res = ans.size() - 1;
//     }
//     else
//     {
//       res = fun(n - 1, coins, N, dp);
//       if (res == 1e9) {
//         cout << -1 << endl;
//         continue;
//       }
//     }
//     cout << res << endl;
//   }

//   return 0;
// }



//3rd 
#include <bits/stdc++.h>
using namespace std;




int mod = 1e9 + 7;
int f(int ind, int n, vector<int>& vec) {
  if (ind == 0) return n;
  int v1, v2;
  if (vec[ind] <= n) {
    int k = n / vec[ind];
    int modu = n % vec[ind];
    v1 = k + f(ind - 1, modu, vec);
    v2 = k - 1 + f(ind - 1, modu + vec[ind], vec);

  }
  else {
    return f(ind - 1, n, vec);
  }
  return min(v1, v2);

}

void solve() {
  int n;
  cin >> n;
  vector<int> vec = { 1,3,6,10,15 };
  cout << f(4, n, vec) << endl;
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}