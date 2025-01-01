class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int ans = 0;
       vector<int>v(255,-1);
       int n = s.length();
       int l = 0, r = 0;
       while(r < n) {
         if(v[s[r]] != -1) {
            if(v[s[r]] >= l) {
                l = v[s[r]] + 1;
            }
         }
         int temp = r-l+1;
         ans = max(ans,temp);
         v[s[r]] = r;
         r++;
       }
       return ans;
    }
};