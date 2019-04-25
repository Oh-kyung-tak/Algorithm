#include<iostream>
#include<string>
#include<queue>

using namespace std;

long long int N, M;
long long int tree[1000001];
long long int lf, rt;
long long int max_length = -1;
long long int result = 0;

int main()
{
	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		tree[i] = temp;

		if (tree[i] > max_length)
			max_length = tree[i];
	}

	lf = 0;
	rt = max_length;

	while (lf <= rt)
	{
		long long int mid = (lf + rt) / 2;
		long long int total = 0;

		for (int i = 0; i < N; i++)
		{
			if (mid < tree[i])
				total += tree[i] - mid;
		}

		if (total >= M)
		{
			if (result < mid)
				result = mid;

			lf = mid + 1;
		}
		else
			rt = mid - 1;
	}

	cout << result << endl;
}
