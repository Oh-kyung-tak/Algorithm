#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int T;

int main() 
{
	scanf("%d", &T);

	while (T--)
	{
		vector<int> v;

		for (int i = 0; i < 5; i++)
		{
			int num;
			scanf("%d", &num);
			v.push_back(num);
		}
		
		sort(v.begin(), v.end());

		if (v[3] - v[1] >= 4)
			printf("KIN\n");
		else
			printf("%d\n", v[1] + v[2] + v[3]);
	}
}
