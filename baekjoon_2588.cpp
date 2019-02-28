#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;
int T;

int main() 
{
	int a, b;
	int sum = 0;
	int c = 1;

	scanf("%d %d", &a, &b);

	while (b)
	{
		int temp = a * (b % 10);
		printf("%d\n", temp);
		
		sum += temp * c;

		b /= 10;
		c *= 10;
	}

	printf("%d", sum);
}
