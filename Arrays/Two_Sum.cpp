// Problem : Two Sum
// Appr0ach: Hashmap
// TC : O(n)
// SC : o(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;

        for(int i=0 ; i<nums.size(); i++ ){
            int x = target -nums[i];
            if(m.find(x)!=m.end()){
                return {i,m[x]};
            }else{
                
                 m[nums[i]]= i;
            }
        }
        return {};
    }
};
