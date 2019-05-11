#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int H, M;
	int check = 0;

	scanf("%d %d", &H, &M);

	if (M >= 45)
	{
		printf("%d %d", H, M - 45);
	}
	else
	{
		if (H == 0)
		{
			H = 23;
			printf("%d %d", H, (M + 60) - 45);
		}
		else
		{
			printf("%d %d", H - 1, (M + 60) - 45);
		}
	}
}
