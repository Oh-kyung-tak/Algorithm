#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> v;
int day[101];

int main()
{
	int N, K;
	int sum = 0;
	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++)
	{
		int num;
		scanf("%d", &num);
		sum += num;
		day[i] = sum;
	}

	for (int i = K; i <= N; i++)
		v.push_back(day[i] - day[i - K]);

	sort(v.begin(), v.end());

	printf("%d", v[v.size() - 1]);
}
