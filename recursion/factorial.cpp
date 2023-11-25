#include<iostream>
using namespace std;

int factorial(int n) { 
    //base
    if (n == 0 || n == 1) return 1 ;
//recursive
    return n*factorial(n-1);
}
int main() {
int n=20;
int f=factorial(20);
cout<<f;
return 0;
}