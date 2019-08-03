#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int N;
long long int sum = 0;
long long int ans = 0;
vector<int> v;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		sum += temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), std::greater<int>());
	
	for (int i = 0; i < N; i++)
	{
		ans += (sum - v[i]) * v[i];
		sum -= v[i];
	}

	printf("%lld", ans);
}