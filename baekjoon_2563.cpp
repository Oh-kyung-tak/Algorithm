#include <iostream>
#include <cstring> 
using namespace std;
int square[100][100];

int main(void)
{
	int N;
	int count = 0;
	scanf("%d", &N);
	while (N--)
	{
		int a, b;
		
		scanf("%d %d", &a, &b);
		
		for (int i = a; i < a + 10; i++)
		{
			for (int j = b; j < b + 10; j++)
				if (square[i][j] == 0)
				{
					square[i][j] = 1;
					count++;
				}
		}
		
	}
	printf("%d\n", count);
}
