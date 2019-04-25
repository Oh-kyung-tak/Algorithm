#include<iostream>
#include<string>
#include<queue>

using namespace std;

long long int N, M;
long long int len[1000001];
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
		len[i] = temp;

		if (len[i] > max_length)
			max_length = len[i];
	}

	lf = 1;
	rt = max_length;

	while (lf <= rt)
	{
		long long int mid = (lf + rt) / 2;
		long long int total = 0;

		for (int i = 0; i < N; i++)
			total += len[i] / mid;
		

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
