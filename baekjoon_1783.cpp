#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	if (N == 1)
		printf("1");
	else if (N == 2)
		printf("%d", min(4, (M + 1) / 2));
	else
	{
		if (M >= 7)
			printf("%d", M - 2);
		else
			printf("%d", min(4, M));
	}
}
