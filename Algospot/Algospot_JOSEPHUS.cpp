#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>

using namespace std;

int C;
int dp[101][101];
int triangle[101][101];

int main()
{
	cin >> C;

	while (C--)
	{
		int N, K;
		int size;
		int cnt = 1;
		queue<int> q;
		vector<int> ans;

		cin >> N >> K;
		
		for (int i = 1; i <= N; i++)
			q.push(i);

		q.pop();

		while (true)
		{
			if (q.size() == 2)
			{
				while (!q.empty())
				{
					ans.push_back(q.front());
					q.pop();
				}

				break;
			}
			
			if (cnt == K)
			{
				q.pop();
				cnt = 1;
			}
			else
			{
				q.push(q.front());
				q.pop();
				cnt++;
			}
		}

		if (ans[0] < ans[1])
			cout << ans[0] << " " << ans[1] << endl;
		else
			cout << ans[1] << " " << ans[0] << endl;
	}
}