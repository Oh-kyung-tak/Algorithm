#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
bool suso[1000001];
vector<int> v;

int main()
{
	memset(suso, true, sizeof(suso));

	for (int i = 2; i <= sqrt(1000000); i++)
	{
		if (suso[i])
		{
			for (int j = i * i; j <= 1000000; j += i)
				suso[j] = false;
		}
	}

	for (int i = 2; i <= 1000000; i++)
	{
		if (suso[i])
			v.push_back(i);
	}

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int num, a, b;
		int cnt = 0;

		cin >> num >> a >> b;

		for (int i = 0; i < v.size(); i++)
		{
			int temp = v[i];

			if (temp >= a && temp <= b)
			{
				while (temp)
				{
					if (temp % 10 == num)
					{
						cnt++;
						break;
					}
					temp /= 10;
				}
			}
		}

		cout << "#" << Test_case << " " << cnt << endl;
	}
}