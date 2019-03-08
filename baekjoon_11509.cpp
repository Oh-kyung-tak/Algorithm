#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;

int n;
int st[10000001];

int main() 
{	
	scanf("%d", &n);
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		int in;
		scanf("%d", &in);
		if (st[in + 1] == 0)
		{
			st[in]++;
			cnt++;
			continue;
		}
		st[in + 1]--;
		st[in]++;
	}
	printf("%d", cnt);
}
