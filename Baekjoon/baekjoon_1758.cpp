#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;
vector<long long int> v;
long long int sum = 0;
long long int cnt = 1;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		long long int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (v[i] - (cnt - 1) >= 0)
			sum += v[i] - (cnt - 1);

		cnt++;
	}

	cout << sum << endl;
}