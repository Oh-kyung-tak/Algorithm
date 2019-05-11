#include <stdio.h>
#include <stdlib.h>

int main()
{
	int apoint = 100, bpoint = 100;
	int num;

	scanf("%d", &num);

	while (num--)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		if (a > b)
			bpoint -= a;
		else if (a < b)
			apoint -= b;

	}

	printf("%d\n%d", apoint, bpoint);
}
