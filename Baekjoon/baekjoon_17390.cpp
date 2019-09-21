#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A, N;
int sum = 0;
vector<int> v;

int ss[300001];

int main()
{
	scanf("%d %d", &A, &N);

	for (int i = 0; i < A; i++)
	{
		int temp;
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
		ss[i + 1] = sum;
	}

	for (int i = 0; i < N; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", ss[b] - ss[a - 1]);
	}
}