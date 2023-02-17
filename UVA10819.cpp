/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int N, budget, dp[110][10010], value[110], weight[110];
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    while(cin >>budget >> N) {
    	memset(dp, -1, sizeof(dp));

    	function<int(int, int)> knapsack = [&](int i, int j) {
    		if(j > budget && j - 200 > budget) {
    			return -INT_MAX;
    		}
    		if(j > budget && j < 1800) {
    			return -INT_MAX;
    		}
    		if(i == N) {
    			if(j > budget && j<=2000) {
    				return -INT_MAX;
    			}
    			return 0;
    		}
    		if(dp[i][j] != -1) return dp[i][j];
    		dp[i][j] = max(knapsack(i+1, j), value[i] + knapsack(i+1, j + weight[i]));
    		return dp[i][j];
    	};
    	for(int i=0; i<N; i++) {
    		cin >> weight[i] >> value[i];
    	}
    	cout << knapsack(0, 0) << "\n";

    }
   	
    
    return 0;
}
