#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;
bool ck = false;
int num;

int solve(vector<int>& v, int sum, int depth)
{
	if (sum == num)
		return true;
	if (sum > num || depth < 0)
		return false;

	return solve(v, sum + v[depth], depth - 1) || solve(v, sum, depth - 1);
}

int main()
{
	cin >> N;

	while (N--)
	{
		int sum = 0;
		vector<int> v;

		cin >> num;

		for (int i = 1; i <= sqrt(num); i++)
		{
			if (num % i == 0)
			{
				if(num / i == i)
				{
					v.push_back(i);
					sum += i;
				}
				else
				{
					v.push_back(i);
					v.push_back(num / i);
					sum += i;
					sum += (num / i);
				}
			}
		}

		sort(v.begin(), v.end());
		v.pop_back();
		sum -= num;

		if (!solve(v, 0, v.size() - 1) && sum > num)
			cout << "weird" << endl;
		else
			cout << "not weird" << endl;
	}
}