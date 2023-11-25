//135 leetcode

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minCandies(vector<int>& ratings) {
    int n = ratings.size();
    vector<pair<int, int>> pairs;

    // Create pairs of (rating, index)
    for (int i = 0; i < n; ++i) {
        pairs.push_back({ratings[i], i});
    }

    // Sort the pairs based on ratings
    sort(pairs.begin(), pairs.end());

    vector<int> candies(n, 1); // Initialize all children with 1 candy

    // Traverse the sorted pairs and update the candies
    for (int i = 0; i < n; ++i) {
        int index = pairs[i].second;

        // Check left neighbor
        if (index > 0 && ratings[index] > ratings[index - 1]) {
            candies[index] = max(candies[index], candies[index - 1] + 1);
        }

        // Check right neighbor
        if (index < n - 1 && ratings[index] > ratings[index + 1]) {
            candies[index] = max(candies[index], candies[index + 1] + 1);
        }
    }

    // Calculate the total number of candies
    int total_candies = 0;
    for (int i = 0; i < n; ++i) {
        total_candies += candies[i];
    }

    return total_candies;
}

int main() {
    vector<int> ratings = {1, 0, 2};
    int result = minCandies(ratings);
    cout << "Minimum number of candies required: " << result << endl;

    return 0;
}
//Its time complexity is O(n*log(n))

//2nd approch 
// What is a Greedy Algorithm?

// A Greedy Algorithm makes choices that seem optimal at the moment. For this problem, we use a two-pass greedy approach to make sure each child gets the minimum number of candies that still satisfy the conditions.
// The Nuts and Bolts of the Two-Pass Method

//     Initialize Candies Array
//         We start by creating a candies array of the same length as the ratings array and initialize all its values to 1. This is the base case and ensures that every child will receive at least one candy, satisfying the first condition.
//     Forward Pass: Left to Right
//         Now, we iterate through the ratings array from the beginning to the end. For each child (except the first), we compare their rating with the one to the left. If it's higher, we update the candies array for that child to be one more than the child on the left. This takes care of the second condition but only accounts for the child's left neighbor.
//     Backward Pass: Right to Left
//         After the forward pass, we loop through the array again but in the reverse direction. This time, we compare each child's rating with the child to their right. If the rating is higher, we need to make sure the child has more candies than the right neighbor. So, we update the candies array for that child to be the maximum between its current number of candies and one more than the right neighbor's candies. This ensures that both neighboring conditions are checked and satisfied.
//     Summing it All Up
//         Finally, we sum up all the values in the candies array. This will give us the minimum total number of candies that need to be distributed to satisfy both conditions.

// Time and Space Complexity

//     Time Complexity: O(n)O(n)O(n), because we make two passes through the array.
//     Space Complexity: O(n)O(n)O(n), for storing the candies array.

// class Solution {
// public:
//     int candy(std::vector<int>& ratings) {
//         int n = ratings.size();
//         std::vector<int> candies(n, 1);

//         for (int i = 1; i < n; ++i) {
//             if (ratings[i] > ratings[i - 1]) {
//                 candies[i] = candies[i - 1] + 1;
//             }
//         }

//         for (int i = n - 2; i >= 0; --i) {
//             if (ratings[i] > ratings[i + 1]) {
//                 candies[i] = std::max(candies[i], candies[i + 1] + 1);
//             }
//         }

//         int totalCandies = 0;
//         for (int candy : candies) {
//             totalCandies += candy;
//         }

//         return totalCandies;
//     }
// };
// time complexity - O(n) & Sc is O(n)

//3rd approch ->

// One-Pass Greedy Algorithm: Up-Down-Peak Method
// Why Up, Down, and Peak?

// The essence of the one-pass greedy algorithm lies in these three variables: Up, Down, and Peak. They serve as counters for the following:

//     Up: Counts how many children have increasing ratings from the last child. This helps us determine how many candies we need for a child with a higher rating than the previous child.

//     Down: Counts how many children have decreasing ratings from the last child. This helps us determine how many candies we need for a child with a lower rating than the previous child.

//     Peak: Keeps track of the last highest point in an increasing sequence. When we have a decreasing sequence after the peak, we can refer back to the Peak to adjust the number of candies if needed.

// How Does it Work?

//     Initialize Your Counters
//         Start with ret = 1 because each child must have at least one candy. Initialize up, down, and peak to 0.
//     Loop Through Ratings

//         For each pair of adjacent children, compare their ratings. Here are the scenarios:

//             If the rating is increasing: Update up and peak by incrementing them by 1. Set down to 0. Add up + 1 to ret because the current child must have one more candy than the previous child.

//             If the rating is the same: Reset up, down, and peak to 0, because neither an increasing nor a decreasing trend is maintained. Add 1 to ret because the current child must have at least one candy.

//             If the rating is decreasing: Update down by incrementing it by 1. Reset up to 0. Add down to ret. Additionally, if peak is greater than or equal to down, decrement ret by 1. This is because the peak child can share the same number of candies as one of the children in the decreasing sequence, which allows us to reduce the total number of candies.
//     Return the Total Candy Count
//         At the end of the loop, ret will contain the minimum total number of candies needed for all the children, so return ret.

// By using up, down, and peak, we can efficiently traverse the ratings list just once, updating our total candies count (ret) as we go. This method is efficient and helps us solve the problem in a single pass, with a time complexity of O(n)O(n)O(n).
// Time and Space Complexity

//     Time Complexity: O(n)O(n)O(n), for the single pass through the ratings array.
//     Space Complexity: O(1)O(1)O(1), as we only use a few extra variables.

// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         if (ratings.empty()) {
//             return 0;
//         }
        
//         int ret = 1, up = 0, down = 0, peak = 0;
        
//         for (int i = 1; i < ratings.size(); ++i) {
//             if (ratings[i - 1] < ratings[i]) {
//                 up = up + 1;
//                 down = 0;
//                 peak = up;
//                 ret += 1 + up;
//             } else if (ratings[i - 1] == ratings[i]) {
//                 up = down = peak = 0;
//                 ret += 1;
//             } else {
//                 up = 0;
//                 down = down + 1;
//                 ret += 1 + down - int(peak >= down);
//             }
//         }
        
//         return ret;
//     }
// };
// Tc-> O(n) and sc -> O(1)


long maximumSumSubarray(int K, vector<int> &Arr, int N){
        
        
        long res = 0;
      
        for (int i=0; i<K; i++)
           res += Arr[i];
     
        long curr_sum = res;
        
        for (int i=K; i<N; i++)
        {
           
           curr_sum += Arr[i] - Arr[i-K];
           
           res = max(res, curr_sum);
        }
     
       
        return res;
}
        