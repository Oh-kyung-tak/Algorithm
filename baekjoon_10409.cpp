#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

int N, T;
int sum = 0;
int c = 0;
int main()
{
	scanf("%d %d", &N, &T);
	vector<int> v(N);

	for (int i = 0; i < N; i++)
		scanf("%d", &v[i]);
	
	for (int i = 0; i < N; i++)
	{
		if (sum + v[i] <= T)
		{
			sum += v[i];
			c++;
		}
		else
			break;
	}
	
	printf("%d", c);
}
