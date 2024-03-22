#include<bits/sdc++.h>
using namespace std;
void solve(vector<vector<int>> &matrix, int col){
  for(int row = 0; row<matrix.size(); row++){
    if(checkSafe(matrix, row, col)){
      matrix[row] [col] = ;
      solve(matrix, col+1);
      matrix[row][col] =;
    }
  }
}

int main(){
  int n;
  cin>>n;
  vector<vector<int>> matrix(n, vector<int>(n,0));
  solve(matrix, 0,)
  return 0;
}