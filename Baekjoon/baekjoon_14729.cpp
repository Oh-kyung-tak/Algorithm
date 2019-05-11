#include<iostream>
#include<vector>
#include<string>

using namespace std;

int score[100001];

int main()
{
	int people;
	int cnt = 0;
	scanf("%d", &people);

	for (int i = 0; i < people; i++)
	{
		int x, y;
		scanf("%d.%d", &x, &y);
		score[x * 1000 + y]++;
	}

	for (int i = 0; i < 100001; i++)
	{
		while (score[i])
		{
			score[i]--; 
			cnt++;
			printf("%d.%03d\n", i / 1000, i % 1000);
			if (cnt == 7)
				return 0;
		}
		
	}
}
