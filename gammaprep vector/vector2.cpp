#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
     v.push_back(3);
      v.push_back(38);
       v.push_back(35);

       //for inserting any numbers
       v.insert(v.begin(), 30);
       v.insert(v.begin()+2, 40);
       for(int i =0; i<v.size(); i++){
        cout<<v[i]<<endl;
       }
  v.erase(v.begin()+2);

  for(int i =0; i<v.size(); i++) {
    cout<<v[i]<<" ";

  }

  cout<<endl;

  //delete all ranges 
  v.erase(v.begin(), v.begin()+2);
  
  for(int i =0; i<v.size(); i++) {
    cout<<v[i]<<" ";
  }

  //v.end() gives the address of last element+1
  //how to ease complete vector
  v.erase(v.begin(), v.end());
  cout<<" size of vector is now = "<<v.size()<<endl;

  cout<<"first programme sort= "<<endl;

  vector<int> vec;

  vec.push_back(7);
   vec.push_back(5);
    vec.push_back(25);
     vec.push_back(4);
      vec.push_back(8);

      for(int i =0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
      }
      cout<<endl;
      sort(vec.begin(), vec.end());
      cout<<"After sorting : "<<endl;
      for(int i =0; i<vec.size(); i++){
        cout<<vec[i]<<" ";}
}
