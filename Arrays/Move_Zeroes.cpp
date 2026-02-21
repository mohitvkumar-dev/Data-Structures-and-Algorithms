// Problem: Move Zeroes
// platform: Leetcode
// Approach: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0 ; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
