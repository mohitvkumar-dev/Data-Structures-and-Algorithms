// Problem: Union Of Two Sorted Array
// Approach 1: Using map
// TC: O((m+n)log(m+n))
// SC: O(m+n)

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>freq;
        vector<int>result;
        for(int i=0 ; i<nums1.size() ; i++){
          freq[nums1[i]]++;
        }
         for(int i=0 ; i<nums2.size() ; i++){
          freq[nums2[i]]++;
        }

        for(auto &it : freq){
            result.push_back(it.first);
        }
        return result;
    }
};


// Approach 2: Using set
// TC: O((m+n)log(m+n))
// SC: O(m+n)

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(int x : nums1){
          st.insert(x);
        }
        for(int x: nums2){
          st.insert(x);
        }
        vector<int>result(st.begin(),st.end());
        return result;
    }
};

// Approach 3: Two pointer Approach
// TC : O(n+m)
// SC : O(1)

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int n= nums1.size();
        int m= nums2.size();
        int i=0,j=0;

        while(i<n && j<m){
          if(nums1[i]<nums2[j]){
            if(result.empty() || result.back()!=nums1[i])
            result.push_back(nums1[i]);
            i++;
          }
          else if(nums1[i]>nums2[j]){
            if(result.empty() || result.back()!=nums2[j])
            result.push_back(nums2[j]);
            j++;
        }
        else{
           if(result.empty() || result.back()!=nums2[j])
            result.push_back(nums2[j]);
            j++;i++;

        }
      }
      
        while (i < n) {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        }

      
        while (j < m) {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        }

        
        return result;
    }

    
};
