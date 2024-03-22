// problem link - https://codeforces.com/contest/1935/problem/A


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int tt; cin >> tt;
 
    while(tt--) {
        int n; cin >> n;
        string s, t; cin >> s;
        t = s;
        reverse(t.begin(), t.end());
 
        if(t < s) {
            cout << (n % 2 ? t : t + s) << "\n";
        }
        else if(t > s) {
            cout << (n % 2 == 0 ? s : s + t) << "\n";
        }
        else cout << s << "\n";
    }
}