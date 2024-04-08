class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        unordered_map<int,int>mp;
        for(int a : students) {
            mp[a]++;
        }
        queue<int>que;
        for(int val : students) {
            que.push(val);
        }
        int cur = 0;
        while(!que.empty()) {
            int pre = que.front();
            if(mp[sandwiches[cur]] == 0) {
                return que.size();
            }
            if(pre == sandwiches[cur]) {
                mp[pre]--;
                que.pop();
                cur++;
            }
            else {
                int front = que.front();
                que.pop();
                que.push(front);
            }
        }
        return 0;
    }
};