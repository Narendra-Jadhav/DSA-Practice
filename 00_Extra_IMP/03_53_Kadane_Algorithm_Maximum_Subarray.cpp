#include <iostream>
#include <vector>
using namespace std;

/*
? Largest Sum Contiguous Subarray (Kadane’s Algorithm)

The idea of Kadane’s algorithm is to maintain a variable max_ending_here that stores the maximum sum contiguous subarray ending
at current index and a variable max_so_far stores the maximum sum of contiguous subarray found so far, Everytime there is a
positive-sum value in max_ending_here compare it with max_so_far and update max_so_far if it is greater than max_so_far.

* So the main Intuition behind Kadane’s algorithm is,
– the subarray with negative sum is discarded (by assigning max_ending_here = 0 in code).
– we carry subarray till it gives positive sum.

* Time Complexity -> O(n)
*/

// int maxSubArray(vector<int> &nums)
// {
//     //* Kadane's Algorithm
//     int max_till_now = INT8_MIN, current_max = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         current_max = max(nums[i], current_max + nums[i]);
//         max_till_now = max(max_till_now, current_max);
//     }
//     return max_till_now;
// }

int maxSubArray(vector<int> &nums)
{
    //* Kadane's Algorithm
    int sum = 0;
    int maxi = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];

        maxi = max(maxi, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}