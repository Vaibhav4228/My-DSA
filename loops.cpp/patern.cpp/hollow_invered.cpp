#include<iostream>
using namespace std;


int main() {

    int n;
    cin>>n;
    for(int i =0; i <n; i++){
        for(int j =i+1;j<=n; j++){
            if(j==i+1 || j==n|| i==0){
              cout<<j;
            }
            else{
            cout<<" ";
          
        }
        
        }
        cout<< endl;
    }
}


// #include <iostream>
// #include<string>

// using namespace std;

// int main() {
//     string name;
//     int age;
//     double height;

//     cout << "Enter your name: ";
//     cin >> name;

//     cout << "Enter your age: ";
//     cin >> age;

//     cout << "Enter your height (in feet): ";
//     cin >> height;

//     cout << "Name: " << name << endl;
//     cout << "Age: " << age << endl;
//     cout << "Height: " << height << " feet" << endl;

//     return 0;
// }
