//bit masking approch
//Time complexity  - O(n^2)
// 

// #include <iostream>
// #include <string>

// #include <bits/stdc++.h>
// using namespace std;
// void subsequence(string &s)
// {

//     int numsubs = pow(2, s.size());
//     for (int i = 0; i < numsubs; ++i)
//     {
//         string out;
//        int num = i;
//         // convet num to binary
//          int j = 0;
//         while (num)
//         {
//             int b = (num & 1);
//             if(b)
//                  out.push_back(s[j]);
//             ++j;
           
//             num >>= 1;
//         }
//          cout << out << endl;
//     }
   
// }

// int main()
// {
//     string s = "abc";
//     subsequence(s);
//     return 0;
// }

//printing subarrays

#include<bits/stdc++.h> 
using namespace std;

//TC - N^2 SC - N

void subarrays(vector<int>& nums, int start, int end) {
    //base case
      // Base case: if end reaches the size of the array
    if (end == nums.size()) {
        return;
    }

    //one case solution
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    subarrays(nums, start, end + 1);
}
void subb(vector<int>& nums) {
    for (int start = 0; start < nums.size(); start++) {
        int end = start;
        subarrays(nums, start, end);


    }
}

int main() {
    vector<int>nums{ 1,2,3,4,5,6,7,8,9,10 };
    subb(nums);
    return 0;
}