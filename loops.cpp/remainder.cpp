#include<iostream>
using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     while (n != 0) {
//         int rem = n% 10;
//         cout << rem << " , ";

//         n = n/10;
//     }
//  cout << endl;
//  return 0;


// }

//2. convet digit to number 5,2,2 = 522

int main (){
    int digit[] = { 5, 4, 3, 2};
    int ans = 0;
   
    int i =0;
    
    for (i = 0; i<4; i++){
        ans = ans * 10 + digit[i];
    }
    cout << ans << endl;
    return 0;
}
