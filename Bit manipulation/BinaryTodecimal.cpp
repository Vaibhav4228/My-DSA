#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int binaryLength = binary.length();

    for (int i = 0; i < binaryLength; ++i) {
        if (binary[i] == '1') {
            decimal += pow(2, binaryLength - 1 - i);
        }
    }

    return decimal;
}

int main() {
    string binaryNumber;
    
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);

    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
