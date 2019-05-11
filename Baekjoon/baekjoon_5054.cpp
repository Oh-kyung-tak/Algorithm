#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;
int T;

int main() 
{
	scanf("%d", &T);

	while (T--)
	{
		int n;
		vector<int> xi;

		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			int temp;
			scanf("%d", &temp);
			xi.push_back(temp);
		}

		sort(xi.begin(), xi.end());

		printf("%d\n", (xi[n - 1] - xi[0]) * 2);
	}
}
