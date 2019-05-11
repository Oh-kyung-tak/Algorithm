#include <iostream>
#include <map>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;

int N;

queue<long long int> q;
long long int desnum[1000001];
int idx = 9;
int main()
{
	cin >> N;

	memset(desnum, 0, sizeof(desnum));

	for (int i = 1; i <= 9; i++)
	{
		q.push(i);
		desnum[i] = i;
	}

	while (idx <= N)
	{
		if (q.empty())
			break;

		long long int temp = q.front();
		q.pop();

		int lastnum = temp % 10;
		for (int i = 0; i < lastnum; i++)
		{
			idx++;
			long long int d_num = temp * 10 + i;
			q.push(d_num);
			desnum[idx] = d_num;
		}
	}

	if (N > 1022)
		cout << "-1" << endl;
	else
		cout << desnum[N] << endl;
}
