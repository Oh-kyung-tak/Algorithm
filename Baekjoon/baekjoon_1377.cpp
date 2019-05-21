#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
vector<pair<int,int>> v;
int N;
int max_cnt = 0;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back({ num, i });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
		max_cnt = max(max_cnt, v[i].second - i);

	printf("%d", max_cnt + 1);
		
}