#include <iostream>
#include <vector>

using namespace std;

int main (){

    int decimalNumbers;

    cout<<"enter the number: ";
    cin >> decimalNumbers;

    if(decimalNumbers < 0){
        cout<<"enter valid number ";
        return 1;



}

     vector<int> BinaryDigits;
     if(decimalNumbers==0){
        BinaryDigits.push_back(0);
     }

     else{

        while(decimalNumbers>0){
            int digit = decimalNumbers%2;
            BinaryDigits.push_back(digit);
            decimalNumbers/=2;
        }
        cout<< "Binary represntation: ";
        for(int i=BinaryDigits.size()-1; i>=0; --i){
            cout<< BinaryDigits[i];
        }

        cout<<endl;
        return 0;
     }
}


// #include <iostream>
// #include <vector>

// using namespace std; // Add this line

// int main() {
//     int decimalNumber;
//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;

//     if (decimalNumber < 0) {
//         cerr << "Please enter a non-negative decimal number." << endl;
//         return 1;
//     }

//     vector<int> binaryDigits;

//     if (decimalNumber == 0) {
//         binaryDigits.push_back(0);
//     }
//     else {
//         while (decimalNumber > 0) {
//             int remainder = decimalNumber % 2;
//             binaryDigits.push_back(remainder);
//             decimalNumber /= 2;
//         }
//     }

//     cout << "Binary representation: ";
//     for (int i = binaryDigits.size() - 1; i >= 0; --i) {
//         cout << binaryDigits[i];
//     }
//     cout << endl;

//     return 0;
// }
