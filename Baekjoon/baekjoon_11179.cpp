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

int n;
stack<int> s;
int cnt = 1;
int sum = 0;

int main()
{
	cin >> n;

	while (n)
	{
		s.push(n % 2);
		n /= 2;
	}

	while (!s.empty())
	{
		sum += cnt * s.top();
		cnt *= 2;
		s.pop();
	}

	cout << sum << endl;
}