#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int main() 
{
	while (1)
	{
		int num;
		int tempnum = 0;
		vector<int> v;

		scanf("%d", &num);

		if (num == 0)
			break;

		for (int i = 0; i < num; i++)
		{
			int t;
			scanf("%d", &t);
			v.push_back(t);
		}

		for (int i = 0; i < num; i++)
		{
			if (tempnum != v[i])
				printf("%d ", v[i]);

			tempnum = v[i];
		}

		printf("$\n");
	}
}
