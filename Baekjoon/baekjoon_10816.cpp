#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;
int N, M;
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	scanf("%d", &M);
	
	for (int i = 0; i < M; i++)
	{
		int temp;
		scanf("%d", &temp);
		printf("%d ", upper_bound(v.begin(), v.end(), temp) - lower_bound(v.begin(), v.end(), temp));
	}

}