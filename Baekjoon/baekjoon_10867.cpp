#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int visit[100001];
int num;
int f_num;

int main()
{
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
		scanf("%d", &visit[i]);

	sort(visit, visit + num);

	f_num = visit[0];
	printf("%d ", f_num);
	for (int i = 1; i < num; i++)
	{
		if (f_num != visit[i])
		{
			printf("%d ", visit[i]);
			f_num = visit[i];
		}
	}
}
