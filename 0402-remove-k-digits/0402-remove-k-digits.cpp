class Solution {
public:
    string removeKdigits(string num, int k) {
         stack<char> st;
        for(char digit : num) {
            while(!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }

        // Remove the remaining digits from the end if k > 0
        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Build the result string from the stack
        string res = "";
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        // Remove leading zeros
        int start = 0;
        while(start < res.size() && res[start] == '0') {
            start++;
        }
        res.erase(0, start);

        return res.empty() ? "0" : res;
    }
};