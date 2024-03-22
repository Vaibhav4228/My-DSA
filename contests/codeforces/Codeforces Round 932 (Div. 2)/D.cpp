// problem - https://codeforces.com/contest/1935/problem/D

#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int tt; cin >> tt;
 
    while(tt--) {
        int n, c, sum = 0; cin >> n >> c;
 
        vector<int>a(n);
        for(auto &i : a) cin >> i;
 
        sum = (c + 1) * (c + 2) / 2;
 
        int odd = 0, even = 0;
 
        for(auto &i : a) {
            sum -= (i + 2) / 2;
            sum -= (c - i + 1);
 
            odd += (i % 2);
            even += (1 - (i % 2));
 
            if(i % 2) sum += odd;
            else sum += even;
        }
 
        cout << sum << "\n";
    }
}

