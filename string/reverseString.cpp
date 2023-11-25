#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//by two pointer approch

// void reverseStr(string& str){

//     int n = str.length();
//     for(int i = 0, j =n-1; i < j; i++, j--){
//         swap(str[i], str[j]);

//     }
// }

//     int main (){

//         string str = "rahul";
//         reverseStr(str);
//         cout<<str<<endl;
//         return 0;
//     } //Tc - O(n), and sc - O(1)

//using recursion

// void recursiveRev (string& str, int i = 0) {

//     int n = str.length();
//     if(i == n/2)
//     return; 
//     swap(str[i], str[n-i-1]);
//     recursiveRev(str, i+1);
// }


//      int main(){

//         string str;
//         cout << "Enter the string: ";
//         cin >> str;

//         recursiveRev(str);

//         cout << "your reverse string is:  "<< str << endl;
//         return 0;
//      }

// tc - O(n), sc - O(n)

//inbuilt string 

int main(){

    string str = "vaibhav";
  

    reverse(str.begin(), str.end());
    cout<<str<< std::endl;
    return 0;
}
// but if i want to print in decenting oredr by in built funtions
