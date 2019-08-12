#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;
int num[1001];

int main()
{
	cin >> N;

	while (N--)
	{
		memset(num, 0, sizeof(num));
		
		int temp;
		int max_cnt = -1;
		int max_num = 0;

		cin >> temp;

		for (int i = 0; i < temp; i++)
		{
			int ss;
			cin >> ss;
			num[ss]++;
		}

		for (int i = 1; i <= 1000; i++)
		{
			if (num[i] > max_cnt)
			{
				max_cnt = num[i];
				max_num = i;
			}
		}

		cout << max_num << endl;
	}

}

