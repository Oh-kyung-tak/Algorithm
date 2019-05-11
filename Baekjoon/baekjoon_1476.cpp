#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int E, S, M;
	int a = 1, b = 1, c = 1;
	int cnt = 1;
	scanf("%d %d %d", &E, &S, &M);
	
	while (1)
	{
		if (a > 15)
			a = 1;
		if (b > 28)
			b = 1;
		if (c > 19)
			c = 1;

		if (a == E && b == S && c == M)
			break;

		a++; b++; c++; cnt++;
	}

	printf("%d", cnt);
}
