// #include <iostream>
// #include<queue>
// using namespace std;

// class Info{
//   public:
//     int data;
//     int rowIndex;
//     int colIndex;

//     Info(int a, int b, int c) {
//       this->data = a;
//       this->rowIndex = b;
//       this->colIndex = c;
//     }
// };

// class compare{
//   public:
//     bool operator()(Info* a, Info* b) {
//       return a->data > b->data;
//     } 
// };

// void mergeKSortedArrays(int arr[][4], int n, int k , vector<int> &ans) {

//     priority_queue<Info*, vector<Info*>, compare> pq;

//     //1 step : process firsk k elements
//     for(int row =0; row<k; row++) {
//       int element = arr[row][0];
//       Info* temp = new Info(element, row,0);
//       pq.push(temp);
//     }

//     while(!pq.empty()) {
//       Info* temp = pq.top();
//       pq.pop();
//       int topData = temp->data;
//       int topRow = temp->rowIndex;
//       int topCol = temp->colIndex;

//       //store in ans vector
//       ans.push_back(topData);

//       //next element for the same row, jisme se pop kia h just abhi
//       //use insert bhi toh karna hai
//       if(topCol + 1 < n) {
//         //iska matlab row me or element abhi present hai
//         Info* newInfo = new Info(arr[topRow][topCol+1], topRow, topCol+1);
//         pq.push(newInfo);
//       }
//     }
// }

// int main() {
//   int arr[3][4] = {
//                 {1,4,8,11},
//                 {2,3,6,10},
//                 {5,7,12,14}
//   };
//   int n = 4;
//   int k = 3;

//   vector<int> ans;
//   mergeKSortedArrays(arr, n, k , ans);

//   cout << "printing Ans array: " << endl;
//   for(int i=0; i<ans.size(); i++) {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 998244353
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        int n,x,f=0,ff=0;
        cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==x){
                f=i+1;
            }
        }
        int l=0,r=n,k=0;
        vector<pair<int,int>>ans;
        if(f!=n){
            k++;
            swap(a[f-1],a[n-1]);
            ans.push_back({f,n});
        }
        while((r-l)>1){
            int m=(r+l)/2;
            if(a[m]<=x){
                l=m;
            }
            else{
                r=m;
            }
        }
        if(l!=n-1){
            k++;
            ans.push_back({l+1,n});
        }
        cout<<k<<endl;
        for(int i=0; i<k; i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
    return 0;
}