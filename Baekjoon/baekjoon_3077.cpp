#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <map>
#include <stack>

using namespace std;

int N;
int ans[2501];
int cnt = 0;

map<string, int> m;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		string w;
		cin >> w;
		m[w] = i;
	}

	for (int i = 0; i < N; i++)
	{
		string w;
		cin >> w;
		ans[i] = m[w];
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (ans[i] < ans[j])
				cnt++;
		}
	}

	cout << cnt << "/" << N * (N - 1) / 2 << endl;
}