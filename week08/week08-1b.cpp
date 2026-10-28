// week08-1b.cpp學習計畫 Matrix 第一題 最有錢的人
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        int ans = 0; // 最有錢的人，有多少錢？(先設成0)
        for (int i=0; i<M; i++) { // 左手 i 範圍 M
            int now = 0; // 小迴圈前面 now 是 0
            for (int j=0; j<N; j++) { // 右手 j 範圍 N
                now += accounts[i][j]; // 小迴圈中間 now +=
            }
            if (now > ans) ans = now; // 小迴圈後面 now 拿來用
        }
        return ans;
    }
};
