#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

int n;

int main() 
{
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{

		int check = 0;
		int solve[11];

		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &solve[j]);

			if (solve[j] != ((j - 1) % 5 + 1))
				check = 1;
		}

		if (check == 0)
			printf("%d\n", i);
	}
}
