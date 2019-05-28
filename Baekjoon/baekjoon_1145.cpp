#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int num[5];
int startnum = 1;

int main()
{
	for (int i = 0; i < 5; i++)
		scanf("%d", &num[i]);

	while (1)
	{
		int cnt = 0;

		for (int i = 0; i < 5; i++)
		{
			if (startnum % num[i] == 0)
				cnt++;
		}

		if (cnt >= 3)
		{
			printf("%d", startnum);
			break;
		}

		startnum++;
	}
}