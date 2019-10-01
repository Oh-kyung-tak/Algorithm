#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int C;
int num[100005];
int ans;
int max_cnt = -9999999999999;

int main()
{
	cin >> C;
	
	while (C--)
	{
		int N;
		cin >> N;

		for (int i = 1; i <= N; i++)
			cin >> num[i];

		ans = num[1];
		max_cnt = num[1];

		for (int i = 2; i <= N; i++)
		{
			if (ans + num[i] > num[i])
				ans += num[i];			
			else
				ans = num[i];

			max_cnt = max(max_cnt, ans);
		}

		cout << max_cnt << endl;
	}
}