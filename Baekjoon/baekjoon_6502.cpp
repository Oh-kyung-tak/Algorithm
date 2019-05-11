#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, m, n, l;
	double a, b;
	for (i = 1;; i++)
	{

		scanf("%d", &m);
		if (m == 0)
			return 0;
		scanf("%d %d", &n, &l);

		a = ((n*n) + (l*l));
		b = (m * 2)*(m * 2);

		if (a > b)
			printf("Pizza %d does not fit on the table.\n", i);
		else
			printf("Pizza %d fits on the table.\n", i);
	}

	return 0;
}
