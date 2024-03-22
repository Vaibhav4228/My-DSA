// problem - https://codeforces.com/contest/1935/problem/B

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
        vector<int>arr(n), prefix(n), suffix(n);

        for(auto &i : arr) cin >> i;

        set<int>preMex, sufMex;
        int a = 0, b = 0;

        for(int i = 0; i < n; i++) {
            preMex.insert(arr[i]);
            while(preMex.count(a)) a++;
            prefix[i] = a;
        }

        for(int i = n - 1; i >= 0; i--) {
            sufMex.insert(arr[i]);
            while(sufMex.count(b)) b++;
            suffix[i] = b;
        }

        vector<pair<int,int>>answer;

        for(int i = 0; i + 1 < n; i++) {
            if(prefix[i] == suffix[i + 1]) {
                answer.push_back({1, i + 1});
                answer.push_back({i + 2, n});
                break;
            }
        }

        if(!answer.size()) cout << -1 << "\n";
        else {
            cout << 2 << "\n";
            for(auto &i : answer) cout << i.first << " " << i.second << "\n";
        }
    }
}