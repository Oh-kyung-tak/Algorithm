#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

long long fact[21];
bool ck[21];
vector<int> v;
int N;
int k;

int main()
{
	fact[0] = 1;
	fact[1] = 1;

	for (int i = 2; i <= 20; i++)
		fact[i] = fact[i - 1] * i;

	cin >> N >> k;

	if (k == 2)
	{
		int loop = N - 1;
		long long sum = 1;
		while (loop)
		{
			int num;
			cin >> num;
			for (int i = 1; i <= N; i++)
			{
				if (num == i)
				{
					ck[i] = true;
					break;
				}
				else
				{
					if (!ck[i])
						sum += fact[loop];
				}
			}
			loop--;
		}
		cout << sum << endl;
	}
	else
	{
		long long num;
		cin >> num;
		int st_num = N - 1;
		long long start = fact[st_num];

		while (v.size() != N)
		{
			for (int i = 1; i <= N; i++)
			{
				if (num > start)
				{
					if (!ck[i])
						num -= start;
				}
				else
				{
					if (!ck[i])
					{
						ck[i] = true;
						v.push_back(i);
						break;
					}
				}
			}
			if (st_num == 0)
				st_num = 1;

			start /= st_num;
			st_num--;
		}
		
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
	}
}