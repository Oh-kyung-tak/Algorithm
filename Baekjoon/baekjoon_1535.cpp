#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
int N;
int L[21];
int J[21];
vector<int> v;

int check(int hp, int joy, int cnt)
{	
	if (cnt == N)
	{
		if (hp > 0)
			v.push_back(joy);
		
		return 0;
	}

	check(hp - L[cnt], joy + J[cnt], cnt + 1);

	check(hp, joy, cnt + 1);

	return 0;
}
int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &L[i]);
	for (int i = 0; i < N; i++)
		scanf("%d", &J[i]);

	check(100, 0, 0);

	sort(v.begin(), v.end());

	printf("%d", v[v.size() - 1]);
}
