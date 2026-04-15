// Problem: sort Char By Freq
// Tc: o(n)
// SC : O(n)

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char ch: s){
            freq[ch]++;
        }

        vector<string>bucket(s.size()+1);
        for(auto it : freq){
            char ch= it.first;
            int  count = it.second;
            bucket[count]+= string(count, ch);
        }
        string result;
        for(int i=s.size(); i>=0 ; i--){
            if(bucket[i]!=""){
                result+= bucket[i];
            }
        }
        return result;

    }
};
