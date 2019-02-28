#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	while (1)
	{
		int a, b;
		char c;

		cin >> a >> c >> b;

		if (a == 0 && c == 'W' && b == 0)
			break;

		if (c == 'W')
		{
			if (a - b >= -200)
				printf("%d\n", a - b);
			else
				printf("Not allowed\n"); 
		}
		else if (c == 'D')
		{
			printf("%d\n", a + b);
		}
	}
}
