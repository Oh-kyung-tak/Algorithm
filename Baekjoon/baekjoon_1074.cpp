#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
int cnt = 0;
int N;
int R, C;

void check_num(int x, int y, int N)
{
	if (N == 2)
	{
		if (x == R && y == C)
			printf("%d", cnt);
		cnt++;
		if (x == R && y + 1 == C)
			printf("%d", cnt);
		cnt++;
		if (x + 1 == R && y == C)
			printf("%d", cnt); 
		cnt++;
		if (x + 1 == R && y + 1 == C)
			printf("%d", cnt);
		cnt++;
			
	}
	else
	{
		check_num(x, y, N / 2);
		check_num(x, y + N / 2, N / 2);
		check_num(x + N / 2, y, N / 2);
		check_num(x + N / 2, y + N / 2, N / 2);
	}
}
int main()
{
	scanf("%d %d %d", &N, &R, &C);
	
	check_num(0, 0, pow(2,N));
}