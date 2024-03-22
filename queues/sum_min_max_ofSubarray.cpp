#include <bits/stdc++.h>
using namespace std;

int sumOfMinMax(vector<int> &nums, int k)
{
    // Two dequeues to store indices for max and min elements
    deque<int> dq, dq2; // first dq gives max, and dq2 gives min

    int ans = 0;

    int size = nums.size();
    // first window process till k size
    for (int i = 0; i < k; i++)
    {
        int ele = nums[i];
        // push elements in the queue and remove smaller elements
        while (!dq.empty() && ele >= nums[dq.back()])
        {
            dq.pop_back();
        }
        // push elements in the queue and remove larger elements
        while (!dq2.empty() && ele <= nums[dq2.back()])
        {
            dq2.pop_back();
        }
        dq.push_back(i);
        dq2.push_back(i);
    }

    // Add the sum of the first window max and min values to the answer
    ans = ans + nums[dq.front()] + nums[dq2.front()];

    // Process the remaining windows (Removal and Insertion)
    for (int i = k; i < size; i++)
    {
        // Add the max value of the current window to the answer
        ans += nums[dq.front()];

        // Remove elements outside the window
        if (i - dq.front() >= k)
            dq.pop_front();

        int ele = nums[i];
        // push elements in the queue and remove smaller elements
        while (!dq.empty() && ele >= nums[dq.back()])
        {
            dq.pop_back();
        }

        // push elements in the queue and remove larger elements
        while (!dq2.empty() && ele <= nums[dq2.back()])
        {
            dq2.pop_back();
        }

        dq.push_back(i);
        dq2.push_back(i);
    }
    // Add the sum of the last window max and min values to the answer
    ans = ans + nums[dq.front()] + nums[dq2.front()];

    return ans;
}

int main()
{
    vector<int> v{2, 5, -1, 7, -3, -1, -2};
    int k = 4;

    cout << sumOfMinMax(v, k) << endl;
    return 0;
}
