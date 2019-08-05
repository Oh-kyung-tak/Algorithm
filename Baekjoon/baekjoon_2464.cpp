#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

long long int N;
long long int ans;
vector<long long int> v;
vector<long long int> v1;

stack<long long int> s;
int main()
{
	cin >> N;
	ans = N;
	while (N)
	{
		s.push(N % 2);
		N /= 2;
	}

	v.push_back(0);
	while (!s.empty())
	{
		v.push_back(s.top());
		s.pop();
	}

	v1 = v;

	if (prev_permutation(v1.begin(), v1.end()))
	{
		long long int sum = 0;
		long long int cnt = 1;

		for (int i = v1.size() - 1; i >= 0; i--)
		{
			sum += v1[i] * cnt;
			cnt *= 2;
		}

		cout << sum << " ";
	}
	else
		cout << "0" << " ";

	v1 = v;

	if (next_permutation(v1.begin(), v1.end()))
	{
		long long int sum = 0;
		long long int cnt = 1;

		for (int i = v1.size() - 1; i >= 0; i--)
		{
			sum += v1[i] * cnt;
			cnt *= 2;
		}

		cout << sum;
	}
}