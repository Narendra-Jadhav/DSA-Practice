#include <iostream>
#include <vector>
using namespace std;

//? Permutations of a String
//* Total Permutations of String of length n => n! (n factorial)

void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
    //* Base case
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int j=index; j<nums.size(); j++) {
        swap(nums[index], nums[j]);
        solve(nums, ans, index+1);
        // backtrack
        swap(nums[index], nums[j]);
        // after we swap, for next iteration we are swapping from original string, so it is required to swap back
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main()
{
    
    
    return 0;
}