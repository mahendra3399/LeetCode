class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> result;
        string current;
        vector<string> phone = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        backtrack(result, phone, digits, current, 0);
        return result;
    }
    
    void backtrack(vector<string>& result, const vector<string>& phone,const string& digits,string& current,
     int index){
         if (index == digits.size()) {
            result.push_back(current);
            return; 
            }
            string letters = phone[digits[index] - '0'];
            for (char letter : letters) {
            current.push_back(letter);
            backtrack(result, phone, digits, current, index + 1);
            current.pop_back();
            }
        }
};