#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int N, F;
	int count = 0;

	scanf("%d %d", &N, &F);
	
	int newnum = N / 100;
	newnum *= 100;

	while (1)
	{
		if (newnum % F == 0)
			break;

		newnum++;
		count++;
	}

	if (count < 10)
		printf("0%d", count);
	else
		printf("%d", count);
}
