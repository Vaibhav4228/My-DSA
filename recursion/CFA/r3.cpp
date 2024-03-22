//Time Complexity: O(C(n)) (where C(n) is the number of combinations)
// Space Complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

// find a combination of given number 

void solve(int n, vector<int>conatiner){
  //base case
  if(n==0) {
    for(int i=0; i<conatiner.size(); i++){
      cout<< conatiner[i]<< " ";
    }
    cout << endl;
    return;
  }

  for(int choice = 1; choice<= n; choice++){ // mere choices i, 2, and 3 ban sakte hain
   
   conatiner.push_back(choice);

   solve(n - choice, conatiner);

   conatiner.pop_back();


  }
}

int main (){
  int n;
  cin>> n;

  vector<int> conatiner;
  solve(n, conatiner);

  return 0;

}

