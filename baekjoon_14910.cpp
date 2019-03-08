#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int before = -99999999999;
	int num;
	int check = 1;

	while (scanf("%d", &num) != EOF)
	{
		if (before > num)
			check = 0;

		before = num;
	}

	if (check == 0)
		printf("Bad");
	else
		printf("Good");
}
