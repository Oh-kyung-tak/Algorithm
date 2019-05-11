#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

map<int, int> m;

int main()
{
	int N;
	int M;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		m[temp]++;
	}

	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		int temp;
		scanf("%d", &temp);
		if (m[temp] > 0)
			printf("1\n");
		else
			printf("0\n");
	}
}
