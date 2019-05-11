#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<stack>
#include<math.h>

using namespace std;

bool visited[250000];
int N;

int main()
{
	while (1)
	{
		cin >> N;
		memset(visited, 0, sizeof(visited));

		int cnt = 0;

		if (N == 0)
			return 0;

		int size = 2 * N;

		for (int i = 2; i <= size; i++)
			visited[i] = true;

		for (int i = 2; i <= sqrt(size); i++)
		{
			if (visited[i])
			{
				for (int j = i * i; j <= size; j += i)
					visited[j] = false;
			}
		}

		for (int i = N + 1; i <= size; i++)
		{
			if (visited[i] == true)
				cnt++;
		}

		cout << cnt << endl;
	}
}
