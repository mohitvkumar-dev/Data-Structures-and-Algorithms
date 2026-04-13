// Problem : Remove Outermost Parenthesis
// TC : O(n)
// SC : O(1)

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int level = 0;

        for(char ch : s){
            if(ch == '('){
                if(level > 0) result += ch;
                level++;
            }
            else { // ch == ')'
                level--;
                if(level > 0) result += ch;
            }
        }
        return result;
    }
};
