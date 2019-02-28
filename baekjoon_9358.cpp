#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>
#include<stack>

using namespace std;
int T;
int setnum[101];
int cnt = 1;

int main() 
{
	scanf("%d", &T);

	while (T--)
	{
		int N;
		memset(setnum, 0, sizeof(setnum));

		scanf("%d", &N);

		for (int i = 1; i <= N; i++)
			scanf("%d", &setnum[i]);

		while (1)
		{
			if (N == 2)
				break;

			for (int i = 1; i <= N; i++)
				setnum[i] = setnum[i] + setnum[N + 1 - i];

			if (N % 2 == 1)
				N = N / 2 + 1;
			else
				N = N / 2;
		}

		if (setnum[1] > setnum[2])
			printf("Case #%d: Alice\n", cnt);
		else
			printf("Case #%d: Bob\n", cnt);

		cnt++;
	}
}
