#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

using namespace std;
char map[6][6];
int N;
int min_s = 99999;
int max_s = -99999;
vector<char> v;

void check_sum()
{
	int sum = v[0] - '0';
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == '+')
			sum += v[i + 1] - '0';
		else if (v[i] == '-')
			sum -= v[i + 1] - '0';
		else
			sum *= v[i + 1] - '0';

		i += 1;
	}

	min_s = min(min_s, sum);
	max_s = max(max_s, sum);
}
void check(int x, int y)
{
	v.push_back(map[x][y]);
	
	if (x == N && y == N)
	{
		check_sum();
		return;
	}
	if (x < N && y < N)
	{
		check(x + 1, y);
		v.pop_back();
		check(x, y + 1);
		v.pop_back();
	}
	else
	{
		if (x == N)
		{
			check(x, y + 1);
			v.pop_back();
		}
		else
		{
			check(x + 1, y);
			v.pop_back();
		}
	}

}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			cin >> map[i][j];
	}

	check(1, 1);

	cout << max_s << " " << min_s << endl;
}