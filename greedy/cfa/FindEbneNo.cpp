#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count = 0;
    string ans = " ";
    for(int i = 0; i<s.length(); i++){
      if((s[i]-'0')%2){
        ans+= s[i];
        count++;
      }
      if(count == 2){
        break;
      }
      if(count!=2){
        cout<<-1<<ans;
      }
      else{
        cout<<ans;
      }
    }
   }
}
