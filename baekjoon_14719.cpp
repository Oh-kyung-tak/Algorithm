#include<iostream>
#include<set>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;
int water[501];
int main()
{
	int H, W;
	int current_h;
	int sum = 0;
	int cnt = 0;

	scanf("%d %d", &H, &W);

	for (int i = 1; i <= W; i++)
		scanf("%d", &water[i]);

	for (int i = 1; i <= W; i++)
	{
		int left_max = -1;
		int right_max = -1;

		for (int j = 1; j < i; j++)
			left_max = max(left_max, water[j]);
		
		for (int k = i + 1; k <= W; k++)
			right_max = max(right_max, water[k]);

		if (left_max > water[i] && right_max > water[i])
			sum += min(left_max, right_max) - water[i];
	}

	printf("%d", sum);
	
}
