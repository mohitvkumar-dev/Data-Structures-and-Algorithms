// Problem: Maximum Subarray Sum
// Approach: Kadane's Algorithm
// TC : O(n)
// SC : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxi=INT_MIN;
        int currSum=0;
        for(int i=0 ; i<n ; i++){
            currSum+=nums[i];

            if(currSum>maxi)
            maxi=max(currSum,maxi);

            if(currSum<0)
            currSum=0;


        }
        return maxi;
    }
};
