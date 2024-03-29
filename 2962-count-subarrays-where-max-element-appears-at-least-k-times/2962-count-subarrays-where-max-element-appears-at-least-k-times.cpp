class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int count = 0;
        long long ans = 0;
        int n = nums.size();
        int l = 0;
        int maxnum = *max_element(nums.begin(), nums.end()); // Correct way to find max element

        for (int r = 0; r < n; ++r) {
            if (nums[r] == maxnum) {
                count++;
            }

            while (count >= k) {
                ans += n - r;
                if (nums[l] == maxnum) {
                    count--;
                }
                l++; // Increment l to slide the window
            }
        }

        return ans;
    }
};