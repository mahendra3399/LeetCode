class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>que;
        int time = 0;
        for(int ticket : tickets) {
            que.push(ticket);
        }
        while(!que.empty()) {
            int temp = que.front();
            que.pop();
            time++;
            temp--;
            if(k==0 && temp == 0) {
                return time;
            }
            if(temp > 0) {
                que.push(temp);
            }
          if(k>0) {
            k--;
          }
          else {
            k = que.size()-1;
          }
        }
        return time;
    }
};