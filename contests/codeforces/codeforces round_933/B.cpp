#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int arr[n];
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        int answer = 0;
        for (int i = 1; i < n - 1; i++) {
            int pehla = arr[i - 1];
            arr[i - 1] -= pehla;
            arr[i] -= pehla * 2;
            arr[i + 1] -= pehla;
 
            if (arr[i - 1] < 0 || arr[i] < 0 || arr[i + 1] < 0) {
                answer = 1;
                break;
            }
        }
 
        int second = 0;
        if (answer == 1 || arr[0] != 0 || arr[n - 1] != 0) {
            cout << "NO" << endl;
        } else {
            for (int i = 0; i < n; i++) {
                if (arr[i] != 0) {
                    second = 1;
                    break;
                }
            }
            if (second == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
 
    return 0;
}