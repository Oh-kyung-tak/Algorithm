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

int N;
vector<int> v;
vector<int> dist;
int cc; 
int cnt = 0;

int gcd(int a, int b)
{
	int tmp, n;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int main()
{
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 1; i < v.size(); i++)
		dist.push_back(v[i] - v[i - 1]);

	for (int i = 0; i < dist.size() - 1; i++)
	{
		if (i == 0)
			cc = dist[i];
		else
			cc = gcd(cc, dist[i]);
	}

	for (int i = 0; i < dist.size(); i++)
		cnt += (dist[i] / cc) - 1;
	
	cout << cnt << endl;
}