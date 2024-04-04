class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int depth = 0,maxdepth = 0;
        for(int i=0;i<n;i++) {
            if(s[i] == '(') 
            depth++;
            if(s[i] == ')')
            depth--;
            maxdepth = max(depth,maxdepth);
        }
        return maxdepth;
    }
};