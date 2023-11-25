#include<bits/stdc++.h>
using namespace std;

void Printpermutation( string &str, int i){
    //base case

    if(i>= str.length()){
        cout << ""<<str << endl;
        return;
    }

    for(int j=i; j<str.length(); j++){

        //swap
        swap(str[i], str[j]);

        //rec call
        Printpermutation(str, i+1);
        //backtracking
        swap(str[i], str[j]);
}
}



int main(){

    string str = "abc";

    int i = 0;
    Printpermutation(str, i);

    return 0;

}