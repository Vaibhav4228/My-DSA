#include<bits/stdc++.h>
using namespace std;
//Why do we need to specify the column size when passing a 2D array as a parameter?
bool isPresent(int arr[][4], int target, int row, int col) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (arr[row][col] == target) {
        return true;
      }
    }
  }
  return false;  // Return false if target is not found in the array
}

int main() {
  int arr[3][4];

  // Input values into the array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }

  // Declare and input values for target, row, and col
  int target, row, col;
  cin >> target >> row >> col;

  // Call isPresent function
  bool v = isPresent(arr, target, row, col);

  // Output the result
  cout << v << endl;
}

//print 

// for(int i=0; i < 3; i++){
//   for(int j = 0; j < 4; j++){
//     cout<<arr[i][j]<<" ";
//   }
//   cout<<endl;
// }
//  return 0;
// }

