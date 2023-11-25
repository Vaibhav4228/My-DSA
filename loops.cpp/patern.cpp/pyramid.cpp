#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for()

 
        if (i % 2 == 1) {
            cout << "#";
        } else {
            cout << "*";
        }

       
        for (int k = i + 1; k <= rows; k++) {
            if (k % 2 == 1) {
                cout << "#";
            } else {
                cout << "*";
            }
        }

      
        cout << endl;
    }

    return 0;
}



