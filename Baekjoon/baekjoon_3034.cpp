#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>
#include<stack>

using namespace std;

int main() 
{
	int N, W, H;

	scanf("%d %d %d", &N, &W, &H);

	int dd = W * W + H * H;

	for (int i = 0; i < N; i++)
	{
		int len;

		scanf("%d", &len);

		if (len * len <= dd)
			printf("DA\n");
		else
			printf("NE\n");
	}
}
