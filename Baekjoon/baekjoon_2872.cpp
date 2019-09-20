#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <map>
#include <stack>
#include <sstream>

using namespace std;

int N;
int book[300001];
int start;
int ans = 0;

int main()
{
	scanf("%d", &N);
	start = N;

	for (int i = 1; i <= N; i++)
		scanf("%d", &book[i]);
	
	for (int i = N; i >= 1; i--)
	{
		if (book[i] == start)
			start--;
		else
			ans++;
	}

	printf("%d", ans);
}