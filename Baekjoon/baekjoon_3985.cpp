#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int rool[1001];
int f_cnt[1001];

int L, N;
int cnt = 0;
int temp = 1;
int max_n = 0;
int people_num_1 = 10000;
int people_num_2 = 10000;

int main()
{
	memset(rool, 0, sizeof(rool));

	cin >> L >> N;

	for (int i = 1; i <= N; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int j = a; j <= b; j++)
		{
			if (rool[j] == 0)
				rool[j] = i;
		}

		f_cnt[i] = b - a + 1;
	}

	for (int i = 1; i <= N; i++)
	{
		if (max_n < f_cnt[i])
		{
			people_num_1 = i;
			max_n = f_cnt[i];
		}
			
	}

	for (int i = 1; i < L; i++)
	{
		if (rool[i] == 0)
		{
			temp = 1;
			continue;
		}
	
		if (rool[i] == rool[i + 1])
			temp++;
		else
		{
			if (temp >= cnt)
			{
				if (temp == cnt)
				{
					if (people_num_2 > rool[i])
						people_num_2 = rool[i];
				}
				else
					people_num_2 = rool[i];

				cnt = temp;
			}
			
			temp = 1;
		}

		if (i == L - 1)
		{
			if (temp >= cnt)
			{
				if (temp == cnt)
				{
					if (people_num_2 > rool[i])
						people_num_2 = rool[i];
				}
				else
					people_num_2 = rool[i];

				cnt = temp;
			}
			temp = 1;
		}
	}

	cout << people_num_1 << endl;
	cout << people_num_2 << endl;
}