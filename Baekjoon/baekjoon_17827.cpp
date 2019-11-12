#include <iostream>
#include <map>

using namespace std;

int N, M, C;
int snail[200001];

int main()
{	
	scanf("%d %d %d", &N, &M, &C);

	for (int i = 1; i <= N; i++)
		scanf("%d", &snail[i]);
	
	for (int i = 0; i < M; i++)
	{
		int temp;
		scanf("%d", &temp);
		temp++;
		if (temp <= N)
			printf("%d\n", snail[temp]);
		else
		{
			
				printf("%d\n", snail[(temp - N - 1) % (N - C + 1) + C]);
		}
			
	}
}