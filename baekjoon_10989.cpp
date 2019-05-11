#include <iostream>
#include <map>
#include <string.h>
#include <string>
#include <vector>
#include <queue>

//메모리 제한 8MB N이 10,000,000 
//Sort 이용 시 메모리 초과
using namespace std;

int num_cnt[10001];
int N;
int max_num = -1;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		num_cnt[temp]++;
		max_num = max(max_num, temp);
	}

	for (int i = 1; i <= max_num; i++)
	{
		for (int j = 0; j < num_cnt[i]; j++)
			printf("%d\n", i);
	}
}
