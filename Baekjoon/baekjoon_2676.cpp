#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	int t, a, b;

	scanf("%d", &t);

	while (t--) 
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", 1 + (a - b) * b);
	}

	return 0;
}