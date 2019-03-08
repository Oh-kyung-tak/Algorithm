#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

int Mmoney, Nmoney;
int N;

int main() 
{	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int time;
		scanf("%d", &time);

		int Mm = time / 30;
		int Nm = time / 60;

		Mmoney += (Mm + 1) * 10;
		Nmoney += (Nm + 1) * 15;
	}

	if (Mmoney < Nmoney)
		printf("Y %d", Mmoney);
	else if (Mmoney > Nmoney)
		printf("M %d", Nmoney);
	else
		printf("Y M %d", Mmoney);
}
