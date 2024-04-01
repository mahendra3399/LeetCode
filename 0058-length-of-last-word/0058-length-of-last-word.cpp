class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;
        while(i>=0 && s[i] == ' '){
            i--;
        }
        int lastindex = i;
        while(i>=0 && s[i]!=' '){
            i--;
        }
        return lastindex-i;
    }
};