#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

using namespace std;

int alpa[27] = { 3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1 };

int N, M;
string A, B;
vector<int> v;

int main()
{
	cin >> N >> M;
	cin >> A >> B;

	if (N <= M)
	{
		for (int i = 0; i < N; i++)
		{
			v.push_back(alpa[A[i] - 'A']);
			v.push_back(alpa[B[i] - 'A']);
		}

		for (int i = N; i < M; i++)
			v.push_back(alpa[B[i] - 'A']);
	}
	else
	{
		for (int i = 0; i < M; i++)
		{
			v.push_back(alpa[A[i] - 'A']);
			v.push_back(alpa[B[i] - 'A']);
		}

		for (int i = M; i < N; i++)
			v.push_back(alpa[A[i] - 'A']);
	}

	while (1)
	{
		vector<int> temp;

		for (int i = 0; i < v.size() - 1; i++)
		{
			if(v[i] + v[i + 1] < 10)
				temp.push_back(v[i] + v[i + 1]);
			else
				temp.push_back(v[i] + v[i + 1] - 10);
		}
		v.clear();
		v = temp;
		if (v.size() == 2)
		{
			if (v[0] != 0)
				printf("%d", v[0]);
			printf("%d%%\n", v[1]);
			return 0;
		}
	}
}