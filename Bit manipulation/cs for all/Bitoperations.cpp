#include<bits/stdc++.h>
using namespace std;

int main() {
  // int a, b;
  // cin >> a >> b;  // Takes two integer inputs
  // cout << (a & b) << endl;  // Performs bitwise AND operation and prints the result



  //Or operator
  /* 1 1 - 1
     1 0 - 1
     0 1 - 1
     1 1 - 1
     0 0 - 0
   */
  // cout<< (a |  b) << endl;
  /* XOR
     1 1 - 0
     1 0 - 1
     0 1 - 1
     1 1 - 1
     0 0 - 0
     AGAR 2 ELEMINT SAME HAI TOH 0
  */
//  cout<< (a ^ b) << endl;
//  (~) operator  ye jo hai only 1 operator m legaga if no. 1 is 1 then it is called a -ve number 
// cout<<(~a ) << endl;
/*left shift << operator 10111->becomes 101110 last mein ek zero lgega */
// cout<< (a << b);
// //right shiftoperator >> bit taker 
// cout<< (a>>b);

//EVEN OR ODD 
// int a;
// cin>>a;
// if((a & 1) == 0)
//   cout<<a << " even number" << endl;
// else if((a &1) == 1)
//     cout<<a << " odd number" << endl;
  //get it bit using nitwose operator // konse no. par konsa bit present hain
//  int a ;
//  cin>> a; //original value
//  int pos;
//  cin>>pos;
//  int x = (1<<(pos-1));
//  int val = (a & x);
//  if(val == 0)
//     cout<<"the bit presnt at position: "<< pos <<" is = 0" <<endl;
//  else if(val > 0)
//    cout<<"the bit present at position at"<< " is = 1"<<endl;

//clear the ith bit using bitwise operator
// int n;
// cin>>n;
// int pos;
// cin>>pos;
// int x = (1<<(pos-1));
// int y = (~x);
// cout<<(n&y)<<endl;

//no. to binary convert
//  int n;
//  cin>> n;
//  vector<int> ans;
//  while(n>1){
//    ans.push_back(n % 2);
//    n = n >> 1; // working as n/=2

//  }
//  ans.push_back(n);
//  for(int i = ans.size()-1; i>=0; i--){
//   cout<<ans[i];
//  }
//  cout<< endl;


// find the non duplicate leetcode 136
// int n;
// cin>>n;
// vector<int> container;
// int inp;
// for(int i=0; i<n; i++){
//   cin >> inp;
//   container.push_back(inp);

// }
// int ans = 0;
// for(int i=0; i<n; i++){
//   ans = ans ^ container[i];
// }
// cout<< ans << endl;


 //single number 2 137


  int n;
  cin>>n;
  vector<int> container;
  int inp;
  for(int i=0; i<n; i++){
    cin >> inp;
    container.push_back(inp);

  }
   in sum = 0;
   for(int i=0; i<n; i++){
    sum = sum ^ container[i];
   }

   int pos;
   int original_cum_xor = sum;
   int curr_pos = 0;
   while(sum > 0){
    if((sum & 1)> 0){
      pos = curr_pos;
      break;
    }
    current_pos++;
    sum = sum >> 1;
    

   }


  return 0;
}
