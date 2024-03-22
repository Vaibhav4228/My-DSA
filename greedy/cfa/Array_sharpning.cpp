#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n; // add this line to declare and initialize 'n'
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++) {
      int inp;
      cin >> inp;
      arr.push_back(inp);
    }

    int inc = 0, dec = n - 1;
    int val = 0;
    bool result = false;

    while (inc <= n - 2) {
      if (val < arr[inc + 1]) {
        val++;
        inc++;
      }
      else {
        break;
      }

      if (inc == n - 1) {
        result = true;
        break;
      }
    }

    val = 0;
    while (dec >= 1) {
      if (val < arr[dec - 1]) {
        val++;
        dec--;
      }
      else {
        break;
      }

      if (dec == 0) {
        result = true;
        break;
      }
      else {
        if (inc >= dec) {
          result = true;
          break;
        }
        else {
          result = false;
          break;
        }
      }
    }

    if (result) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}
