#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int N;
long long int cluster;
long long int sum = 0;
vector<long long int> v;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp); 
	}

	cin >> cluster;

	for (int i = 0; i < N; i++)
	{
		if (v[i] == 0)
			continue;

		if (v[i] / cluster < 0)
			sum += cluster;
		else
		{
			if (v[i] % cluster == 0)
				sum += cluster * (v[i] / cluster);
			else
				sum += cluster * ((v[i] / cluster) + 1);
		}
	}

	cout << sum << endl;
}