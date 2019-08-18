#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

vector<int> v;
int N, L;
double start;
int cnt = 0;

int main()
{
	scanf("%d %d", &N, &L);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	start = v[0] - 0.5;

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] + 0.5 - start > L)
		{
			cnt++;
			start = v[i] - 0.5;
		}
	}
	
	printf("%d", cnt + 1);
}