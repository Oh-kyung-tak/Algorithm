#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;
int N;

int main()
{
	while (scanf("%d", &N) != EOF)
	{
		if (N == 0 || N % 6 == 0)
			printf("Y\n");
		else
			printf("N\n");
	}
}