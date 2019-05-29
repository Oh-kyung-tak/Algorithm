#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

bool visited[40001];
int money[40001];
vector<int> pr;
int N;

int main()
{
	memset(visited, true, sizeof(visited));

	for (int i = 2; i <= sqrt(40000); i++)
	{
		if (visited[i] == true)
		{
			for (int j = i * i; j <= 40000; j += i)
				visited[j] = false;
		}
	}

	for (int i = 2; i <= 40000; i++)
	{
		if (visited[i])
			pr.push_back(i);
	}

	scanf("%d", &N);
	money[0] = 1;

	for (int i = 0; i < pr.size(); i++)
	{
		if (pr[i] > N)
			break;
		else
		{
			for (int j = pr[i]; j <= N; j++)
			{
				money[j] += money[j - pr[i]] % 123456789;
				money[j] %= 123456789;
			}
		}
	}

	printf("%d", money[N]);
}