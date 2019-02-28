#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
vector<int> v;

int main()
{
	int N, M;
	int first, last;
	int cnt = 0;

	scanf("%d", &N);
	scanf("%d", &M);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	first = 0;
	last = v.size() - 1;

	while (1)
	{
		int sum = v[first] + v[last];

		if (sum == M)
		{
			cnt++;
			first++;
			last--;
		}
		else if (sum < M)
			first++;
		else
			last--;

		if (first == last)
			break;

		if (first > last)
			break;
	}

	printf("%d", cnt);
}
