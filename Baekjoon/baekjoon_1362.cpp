#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int count = 1;
	while (1)
	{
		int o, w;
		scanf("%d %d", &o, &w);
		if (o == 0 && w == 0)
			break;

		while (1)
		{
			char ex;
			int num;

			scanf("%c %d", &ex, &num);
			if (ex == '#')
				break;

			if (w > 0) 
			{
				if (ex == 'E')
					w -= num;
				else if (ex == 'F')
					w += num;
			}
		}

		if (o / 2 < w && w < 2 * o)
			printf("%d :-)", count);
		else if (w <= 0)
			printf("%d RIP", count);
		else
			printf("%d :-(", count);
		
		printf("\n");
			count++;
	}
}
