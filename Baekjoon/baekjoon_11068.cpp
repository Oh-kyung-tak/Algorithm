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

int N;

bool chk(int n)
{

	for (int i = 2; i <= 64; i++)
	{
		vector<int> v;
		int temp = n;
		bool c = true;

		while (temp)
		{
			v.push_back(temp % i);
			temp /= i;
		}

		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] != v[v.size() - 1 - i])
			{
				c = false;
				break;
			}
		}
		if (c)
			return true;
	}

	return false;
}
int main()
{
	cin >> N;
	while (N--)
	{
		int num;
		cin >> num;

		if (chk(num))
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}