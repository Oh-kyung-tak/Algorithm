#include<iostream>
#include<algorithm>

using namespace std;

int dice[7];
int mm = 0;
int dicenum; 

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int num; 
		scanf("%d", &num);
		dice[num]++;
	}
	
	for (int i = 0; i < 7; i++)
	{
		if (mm <= dice[i])
		{
			mm = dice[i];
			dicenum = i;
		}
	}
	
	if (mm == 1)
		printf("%d", dicenum * 100);
	else if (mm == 2)
		printf("%d", 1000 + dicenum * 100);
	else
		printf("%d", 10000 + dicenum * 1000);
	
	
}
