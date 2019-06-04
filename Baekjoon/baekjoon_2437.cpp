#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

vector<int> v;
int N;
long long int sum = 0;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (sum + 1 >= v[i])
			sum += v[i];
		else
			break;
	}

	printf("%lld", sum + 1);
}