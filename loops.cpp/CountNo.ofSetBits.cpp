#include <iostream>
using namespace std;
//1 &1 = 1, 1 & 0 = 0
// set bit means binary no. of decimal no.
int main () {
    int n = -10;
    int ans = 0;
    while (n != 0) {   // for -ve find karna pdega
        if ( n & 1) {
            
            ans++;
        }

        n = n >> 1; // why right shift if i have 00001011 for last 1 we got by n & 1 the we are go fro right
    }

    cout << "Number of bits "<< ans <<endl;
    return 0;
}