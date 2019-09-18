#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

bool prime[100001];
vector<int> v;
int A, B;
int cnt = 0;

int main()
{
	prime[1] = true;
	for (int i = 2; i <= sqrt(100001); i++)
	{
		if (!prime[i])
		{
			for (int j = i * i; j <= 100001; j += i)
				prime[j] = true;
		}
	}

	for (int i = 2; i <= 100000; i++)
	{
		if (!prime[i])
			v.push_back(i);
	}

	cin >> A >> B;

	for (int i = A; i <= B; i++)
	{
		int c = 0;
		int temp = i;
		for (int j = 0; j < v.size(); j++)
		{
			while (!(temp % v[j]))
			{
				c++;
				temp /= v[j];
				if (temp == 1)
					break;
			}
			if (temp == 1)
				break;
		}

		if (!prime[c])
			cnt++;
	}
	
	cout << cnt << endl;
}