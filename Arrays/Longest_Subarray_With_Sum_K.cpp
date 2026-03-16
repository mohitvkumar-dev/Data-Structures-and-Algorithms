
// Problem: Longest Subarray With Sum K
// Approach: Prefix + hashmap
// TC : o(n)
// SC : o(n)

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map<long long, int>prefixmap;
        prefixmap[0]=-1;
        int maxlen=0;
        int prefixsum=0;

        for(int i=0 ; i<nums.size(); i++){
            prefixsum+=nums[i];
            long long needed= prefixsum - k;

            if(prefixmap.count(needed)){
                int length= i-prefixmap[needed];
                maxlen=max(maxlen, length);
            }
            if(!prefixmap.count(prefixsum)){
                prefixmap[prefixsum] = i;
            }
        }
        return maxlen;
    }
};
