#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

int N, K;
int res;
vector<int> ans;

bool dfs(int sum, int cnt) {
	if (sum == N) res++;
	if (res == K) return true;

	for (int i = 1; i <= 3; i++) 
	{
		if (sum + i <= N) {
			if (dfs(sum + i, cnt + 1)) 
			{
				ans.push_back(i);
				return true;
			}
		}
	}
	return false;
}

int main() {
	scanf("%d %d", &N, &K);

	dfs(0, 0);

	if (ans.empty()) printf("-1");
	else {
		printf("%d", ans[ans.size() - 1]);
		for (int i = ans.size() - 2; i >= 0; --i) printf("+%d", ans[i]);
	}

	return 0;
}