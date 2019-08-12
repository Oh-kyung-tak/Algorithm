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

int N;
int sum = 0;
vector<int> v;

int main()
{
	cin >> N;

	for(int i = 1; i <= sqrt(N); i++)
		if (N % i == 0)
		{
			v.push_back(i);
			v.push_back(N / i);
		}

	sort(v.begin(), v.end());
	v.pop_back();

	cout << N - v[v.size() - 1];
}

