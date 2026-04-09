#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }

    return {};
}
int main() {
    vector<int> n = {2, 7, 11, 15};
    int t = 9;
    vector<int> result = twoSum(n, t);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}

/* NOTE: I am using a direct function approach instead of 'class Solution'.
This is intended for local execution (VS Code/CodeBlocks). 
To run this on LeetCode, wrap the function inside a 'class Solution'.
*/