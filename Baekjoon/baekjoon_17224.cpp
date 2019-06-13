#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;
vector<pair<int, int>> v;
bool ck[101];
int N, L, K;
int cnt = 0;
int score = 0;

int main()
{
	cin >> N >> L >> K;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	sort(v.begin(), v.end());
	
	for(int i = 0; i < N; i++)
	{
		if (ck[i] == false && cnt < K)
		{
			if (v[i].first <= L && v[i].second <= L)
			{
				score += 140;
				ck[i] = true;
				cnt++;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (ck[i] == false && cnt < K)
		{
			if (v[i].first <= L)
			{
				score += 100;
				ck[i] = true;
				cnt++;
			}
		}
	}
	
	cout << score << endl;
}