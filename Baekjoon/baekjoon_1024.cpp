#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

long long int N, L;
int start_num = 0, size_cnt = 0;
bool ck = false;

int main()
{
	cin >> N >> L;

	for (int i = L; i <= 100; i++)
	{
		long long ss = (i * (i + 1)) / 2 - i;
		start_num = 0;

		while (ss <= N)
		{
			if (ss == N)
			{
				ck = true;
				size_cnt = i;
				break;
			}

			start_num++;
			ss += i;
		}

		if (ck)
			break;
	}

	if (ck)
	{
		for (int i = start_num; i < start_num + size_cnt; i++)
			cout << i << " ";
	}
	else
		cout << "-1";
}

