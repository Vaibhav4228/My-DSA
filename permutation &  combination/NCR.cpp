// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//   int N, R;
//   cin >> N >> R;
//   vector<int> container(N + 1);
//   int ans = 1;
//   for (int index = 1; index <= N; index++) {
//     ans = ans * index;
//     container[index] = ans;


//   }
//   cout << container[N] / (container[R] * container[N - R]) << endl;


//   return 0;
// }
//for n-1Ck-1
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
  int N, R;
  cin >> N >> R;
  vector<int> container(N + 1);
  int ans = 1;
  for (int index = 1; index <= N; index++) {
    ans = ans * index;
    container[index] = ans;


  }
  cout << container[N-1] / (container[R-1] * container[N - R]) << endl;


  return 0;
}