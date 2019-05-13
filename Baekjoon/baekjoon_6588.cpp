#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <stack>
#include <math.h>

using namespace std;

bool suso[1000001];

// cin, cout ���� �� ���� printf, scanf �� �� �ð��� �� ª��!!
int main()
{
	memset(suso, true, sizeof(suso));
	for (int i = 2; i <= sqrt(1000001); i++)
	{
		if (suso[i] == true)
		{
			for (int j = i + i; j <= 1000000; j += i)
				suso[j] = false;
		}
	}

	while (1)
	{
		int num;
		bool check = false;

		scanf("%d", &num);

		if (num == 0)
			return 0;

		for (int i = 2; i <= num / 2; i++)
		{
			if (suso[i] == true && suso[num - i] == true)
			{
				printf("%d = %d + %d\n", num, i, num - i);
				check = true;
				break;
			}
		}
		
		if (check == false)
			printf("Goldbach's conjecture is wrong.");
	}
	

}