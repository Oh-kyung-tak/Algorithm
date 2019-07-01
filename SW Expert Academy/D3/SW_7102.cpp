#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
int sum[41];

int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		memset(sum, 0, sizeof(sum));
		int a, b;
		int max_cnt = 0;

		cin >> a >> b;

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
				sum[i + j]++;
		}
		
		for (int i = 1; i <= a + b; i++)
			max_cnt = max(sum[i], max_cnt);

		cout << "#" << Test_case << " ";
		for (int i = 1; i <= a + b; i++)
		{
			if (max_cnt == sum[i])
				cout << i << " ";
		}
		cout << endl;
	}
}