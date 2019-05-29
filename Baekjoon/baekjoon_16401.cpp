#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int N, M;
int snack[1000001];
int l = 1;
int h = 0;
int ans = 0;

//이분 탐색을 통한 길이 구하기
//scanf, printf로 시간 단축
bool check(int n)
{
	int cnt = 0;

	for (int i = 1; i <= N; i++)
		cnt += snack[i] / n;
	
	if (cnt >= M)
		return true;

	return false;
}

int main()
{
	scanf("%d %d", &M, &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &snack[i]);
		h = max(h, snack[i]);
	}
	
	while (l <= h)
	{
		int mid = (l + h) / 2;

		if (check(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
			h = mid - 1;
	}

	printf("%d", ans);
}