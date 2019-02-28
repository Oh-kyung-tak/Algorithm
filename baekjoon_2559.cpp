#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int weather[100001];
int N, K;
int sum = 0;
int maxtemp = -99999999999;

int main() 
{
	memset(weather, 0, sizeof(weather));

	scanf("%d %d", &N, &K);
	
	for (int i = 1; i <= N; i++)
	{
		int num;
		scanf("%d", &num);
		sum += num;
		weather[i] = sum;
	}

	for (int i = K; i <= N; i++)
		maxtemp = max(maxtemp, weather[i] - weather[i - K]);
	
	printf("%d", maxtemp);
}
