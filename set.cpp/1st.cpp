// //set is always sorted and have a unique element
// //set<int>.st; <-declearing
// //see gfg article for more
// // auto -it will define autometically
// // for interating set there is no index so for(auto &it: st)

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     // set<int> st; 
//     // for grater value first
//     set<int, greater<int>> st;
//     st.insert(4); //
//     st.insert(5); //
//     st.insert(6); //
//     st.find(9); //

//     for(auto &it:st){
//         cout<<it<<endl;
//     }

//     return 0;
// }

{
        vector<int>hash(26,0);
        
        
        for(auto i: str)
        hash[i-'a']++;
        int maxi = 0;
        char ch;
        
       
        for(int i = 0; i < 26; i++)
        {
           
            if(hash[i] > maxi){
                maxi = hash[i];
                ch = i + 'a';
            }
        }
        
        return ch;
    }
};