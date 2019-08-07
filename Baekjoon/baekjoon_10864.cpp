#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
vector<int> fr[1001];

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		fr[x].push_back(y);
		fr[y].push_back(x);
	}

	for (int i = 1; i <= N; i++)
		printf("%d\n", fr[i].size());

}

