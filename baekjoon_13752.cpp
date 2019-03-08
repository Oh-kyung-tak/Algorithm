#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
	int T;
	
	scanf("%d", &T);

	while (T--)
	{
		int num;
		scanf("%d", &num);

		for (int i = 0; i < num; i++)
			printf("=");

		printf("\n");
	}
}
