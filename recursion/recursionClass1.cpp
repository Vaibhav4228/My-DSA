#include<iostream>
using namespace std;
void fun (int i , int n)
// // {
// //     //base
// //     if(i >n) return;

// //     //recursion 
// //     fun(i+1, n);
// //     cout<<i<<" ";

// // }
// // int main(){
// //     int n =5;
// //     fun(1,n);

// // return 0;
// // }
{
    //base
    if(i*i>n) return;

    //recursion 
    cout<<i<<" ";
     fun(i+1, n);

}
int main(){
    int n =10000;
    fun(5,n);

return 0;
}

