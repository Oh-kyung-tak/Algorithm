#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>
#include <set>
#include <map>

using namespace std;

bool suso[4000001];
vector<long long int> v;
long long int sum = 0;
int N;
int cnt = 0;

int main()
{
	memset(suso, true, sizeof(suso));

	for (int i = 2; i <= sqrt(4000001); i++)
	{
		if (suso[i])
		{
			for (int j = i * i; j <= 4000000; j += i)
				suso[j] = false;
		}
	}

	cin >> N;

	v.push_back(0);

	for (int i = 2; i <= 4000000; i++)
	{
		if (suso[i])
		{
			sum += i;
			v.push_back(sum);
		}
	}
	int size = v.size();
	
	for (int i = 0; i < size - 1; i++)
	{
		

		if (v[i + 1] - v[i] > N)
			break;

		for (int j = i; j < size; j++)
		{
			if (v[j] - v[i] > N)
				break;

			if (v[j] - v[i] == N)
			{
				cnt++;
				break;
			}
		}
	}
		
	cout << cnt << endl;
	
}