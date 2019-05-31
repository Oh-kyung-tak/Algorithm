#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
using namespace std;

// vector ÀÚ·áÇü ²Ä²ÄÈ÷ º¸±â
vector<int> v;
int L, N;
int min_num = 9999;
int max_num = 0;
int cnt = 0;

int main()
{
	scanf("%d", &L);

	for (int i = 0; i < L; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	scanf("%d", &N);

	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (N >= v[i])
		{
			min_num = v[i];
			break;
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (N <= v[i])
		{
			max_num = v[i];
			break;
		}
	}

	if (min_num == 9999)
		min_num = 0;
	if (max_num == 0)
		max_num = 1000;

	if (min_num == N || max_num == N)
		printf("0");
	else
		printf("%d", (N - min_num) * (max_num - N) - 1);
}