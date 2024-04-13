class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int>mp;
        int size = 0;
        int r=0;
        int l=0;
        while(r<s.length()) {
            mp[s[r]]++;
            if(mp[s[r]] <= 2) {
                size = max(size,r-l+1);
                r++;
            }
            else {
                while(mp[s[r]] > 2) {
                    mp[s[l]]--;
                    l++;
                }
                r++;
            }
        }
        return size;
    }
};