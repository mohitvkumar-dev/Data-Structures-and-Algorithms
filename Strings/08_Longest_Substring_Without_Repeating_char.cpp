// Longest Substring Without Repeating Charters
// TC : O(n)
// SC : O(n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0; int maxlen=0;
        for(int j=0 ; j<s.size(); j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
             maxlen= max(maxlen, j-i+1);
        }
        return maxlen;
    }
};
