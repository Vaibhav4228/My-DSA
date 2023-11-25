// #include <iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int lastOcc(vector<int> arr, int target) {
//   int s = 0;
//   int e = arr.size() - 1;

//   int mid = s + (e-s)/2;
//   int ans = -1;

//   while(s <= e) {
//     if(arr[mid] == target) {
      
//       ans = mid;
     
//       s = mid + 1;
//     }
//     else if(target < arr[mid] ) {
      
//       e = mid - 1;
//     }
//     else if(target > arr[mid] ) {
     
//       s = mid + 1;
//     }
//     mid = s + (e-s)/2;
//   }
//   return ans;

// }

// int main() {
//   vector<int> v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
//   int target = 7;

//   int ans = lastOcc(v, target);
//   cout << "Last occurence is at " << ans << endl;
 
//   return 0;
// }

#include<iostream>
using namespace std;
int main(){

  class Solution {
private:
    void fillNeighbors(vector<vector<int>>& image, int sr, int sc, int color, int fillColor)
    {
        if (sr<0||sc<0||sr>=image.size()||sc>=image[0].size()) return;

        if (image[sr][sc]==color||image[sr][sc]!=fillColor) return;
        image[sr][sc]=color;
        
        fillNeighbors(image,sr-1,sc,color,fillColor);
        fillNeighbors(image,sr+1,sc,color,fillColor);
        fillNeighbors(image,sr,sc-1,color,fillColor);
        fillNeighbors(image,sr,sc+1,color,fillColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        fillNeighbors(image,sr,sc,color,image[sr][sc]);
        
        return image;

    }
};
}