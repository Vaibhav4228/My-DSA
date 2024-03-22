#include <bits/stdc++.h>
using namespace std;

void printSum(int arr[][3], int row, int col) {
  cout << "Printing array sum" << endl;

  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      sum += arr[i][j];
    }
    cout << sum << endl;
  }
}

int main() {
  int arr[3][3];

  cout << "Enter the elements of the array:" << endl;

  // Input values into the array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }

  // Print the array
  cout << "Printing the array:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Enter the number to search: ";
  int target;
  cin >> target;

  // Call the printSum function
  printSum(arr, 3, 3);

  return 0;
}
