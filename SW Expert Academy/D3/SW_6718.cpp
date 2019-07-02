#include <iostream>

using namespace std;

int T;

int main()
{
	scanf("%d", &T);

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int num;
		int cnt = 0;
		scanf("%d", &num);

		if (num >= 100)
		{
			cnt = 1;
			if (num >= 1000)
				cnt = 2;
			if (num > 10000)
				cnt = 3;
			if (num > 100000)
				cnt = 4;
			if (num >= 1000000)
				cnt = 5;
		}
		
		printf("#%d %d\n", Test_case, cnt);
	}
}