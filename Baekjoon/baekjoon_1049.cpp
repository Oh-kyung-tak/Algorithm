#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	int set[51], one[51];
	int setmin = 9999;
	int onemin = 9999;
	int minnum = 0;

	scanf("%d %d", &N, &M);

	for (int i = 1; i <= M; i++)
	{
		scanf("%d %d", &set[i], &one[i]);
		setmin = min(set[i], setmin);
		onemin = min(one[i], onemin);
	}

	if (N < 6)
		minnum = min(setmin, onemin * 6);
	else
	{
		setmin = min(setmin, onemin * 6);
		minnum += setmin * (N / 6);
		minnum += min(setmin, onemin * (N % 6));
	}

	printf("%d", minnum);
}
