#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> v;
int max_num = -1;

int main()
{
	cin >> N;

	while (N--)
	{
		int sum = 0;
		int temp[5];
		int max_t = 0;

		for (int i = 0; i < 5; i++)
		{
			cin >> temp[i];
			sum += temp[i];
		}

		for (int i = 0; i < 4; i++)
		{
			for (int j = i + 1; j < 5; j++)
			{
				int t_num = (sum - temp[i] - temp[j]) % 10;
				max_t = max(max_t, t_num);
			}
		}
		
		v.push_back(max_t);
		max_num = max(max_num, max_t);
	}

	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (max_num == v[i])
		{
			cout << i + 1;
			break;
		}
	}
}
