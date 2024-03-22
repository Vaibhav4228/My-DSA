// <-------A SOULTIONS --------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int cmp(string &s, string &t) {
//     int n = s.size();
//     for (int i = 0; i < n; i++) {
//         if (s[i] > t[i]) {
//           return 0;
//         }
//         else if (t[i] > s[i]) {
//           return 1;
//         }
//     }
//     return 2;
// }

// void test() {
//     ll n;
//     cin >> n;
//     string str;
//     cin >> str;

//     string temp = str;
//     reverse(temp.begin(), temp.end());

//     int order = cmp(str, temp);
//     if (order == 2) {
//         cout << str << endl;
//         return;
//     }

//     if (!order) {
//         if (n % 2 == 0) {
//             cout << temp + str << endl;
//         } else {
//             cout << temp << endl;
//         }
//     } else {
//         if (n % 2 == 0) {
//             cout << str << endl;
//         } else {
//             cout << temp + str << endl;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--) {
//         test();
//     }

//     return 0;
// }

// B SOLUTION

#include <bits/stdc++.h>
using namespace std;
#define fs(i, n) for (int i = 0; i < n; i++)
#define ll long long

void test() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    fs(i, n) cin >> v[i];

    vector<ll> temp = v;
    sort(temp.begin(), temp.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (temp[i] == ans)
            ans++;
    }
    if(ans > temp[n-1] && temp [0] != temp[n-1]){
      cout<<-1<<endl;
      return;
    }

    unordered_set<ll> s;
    ll r = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] < ans)
            s.insert(v[i]);
        if (s.size() == ans) {
            r = i + 1;
            break;
        }
    }
    s.clear();
    bool flag = true;

    for (int i = r; i < n; i++) {
        if (v[i] < ans)
            s.insert(v[i]);
        if (s.size() == ans) {
            flag = false;
            break;
        }
    }

    cout << 2 << endl;
    cout << 1 << " " << r << endl;
    cout << r + 1 << " " << n << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        test();
    }

    return 0;
}
