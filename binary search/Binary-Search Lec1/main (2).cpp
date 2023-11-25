// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int firstOcc(vector<int> arr, int target) {
//   int s = 0;
//   int e = arr.size() - 1;
//   int mid = s + (e-s)/2;
//   int ans = -1;

//   while(s <= e) {
//     if(arr[mid] == target) {
//       //ans store
//       ans = mid;
//       //left search
//       e = mid - 1;
//     }
//     else if(target < arr[mid] ) {
//       //left me search
//       e = mid - 1;
//     }
//     else if(target > arr[mid] ) {
//       //right search
//       s = mid + 1;
//     }
//     mid = s + (e-s)/2;
//   }
//   return ans;
// }

// int main() {
//   vector<int> v{0,0,0,0,1,1,1};
//   int target = 4;

//   int ans = firstOcc(v, target);
//   cout << "ans is. "<< ans << endl;

//   auto ans2 = lower_bound (v.begin(), v.end(), target);
//   cout << "ans2 is " << ans2-v.begin() << endl;
//   return 0;
// }

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int pixel = image[sr][sc];
        if( pixel == color ) return image;

        image[sr][sc] = color;

        if( sr>0 and image[sr-1][sc] == pixel ) floodFill(image, sr-1,sc,color);

        if( sc>0 and image[sr][sc-1] == pixel) floodFill(image, sr,sc-1,color);

        if( sr<image.size()-1 and image[sr+1][sc] == pixel) floodFill(image, sr+1,sc,color);

        if( sc<image[0].size()-1 and image[sr][sc+1] == pixel) floodFill(image, sr,sc+1,color);

            
        return image;
    }
};