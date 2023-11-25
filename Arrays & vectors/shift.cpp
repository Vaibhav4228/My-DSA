#include <iostream>
using namespace std;

void shiftNegativeOneSide(int arr[], int n) {
    int j = 0;

    // j-> memory block for -ve

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {1, 2, -3, 4, 5, -6, -7};
    int n = 7;

    shiftNegativeOneSide(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
