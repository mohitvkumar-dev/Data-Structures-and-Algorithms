// Problem: Check if Array is Sorted and Rotated
// Platform: LeetCode
// Topic: Arrays
// Approach: Count number of order violations (circular check)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            if(count > 1) {
                return false;
            }
        }

        return true;
    }
};

