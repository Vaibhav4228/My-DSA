#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     // Find Minimum of a and b
//     int result = min(a, b);
//     while (result > 0) {
//         if (a % result == 0 && b % result == 0) {
//             break;
//         }
//         result--;
//     }
 
//     // Return gcd of a and b
//     return result;
// }

void solve(){
  
    int a,b;
    cin>>a>>b;
    
    for(int i=1;i<=b;i++)
    {   
        bool toBreak = false;
        for(int j=1;j<=b;j++)
    {
       if(i+j>=a &&i+j<=b){
        if(__gcd(i,j)>1)
       { cout<<i<<" "<<j<<endl;
       toBreak = true;
       break;}
       }

       if(toBreak) break;
    }

    }
    cout<<-1;
}
int main()
{

    int testcase = 0;
    cin >> testcase;
    while(testcase--){
        solve();
    }
    return 0;
    
  

}
