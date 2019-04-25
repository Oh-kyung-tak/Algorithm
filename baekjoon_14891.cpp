#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <deque>

using namespace std;

deque<int> dq[5];
int visit[5] = { 0, };
int K;
int start = 1;
int sum = 0;

void rotate(int number, int loc)
{
	if (loc == 1)
	{
		int temp = dq[number].back();
		dq[number].pop_back();
		dq[number].push_front(temp);
	}
	else
	{
		int temp = dq[number].front();
		dq[number].pop_front();
		dq[number].push_back(temp);
	}
}

void solve(int number, int loc)
{
	visit[number] = 1;

	int pre_number = number - 1;
	int next_number = number + 1;

	if (pre_number > 0 && visit[pre_number] == 0)
	{
		if (dq[pre_number][2] != dq[number][6])
			solve(pre_number, loc * -1);
	}

	if (next_number < 5 && visit[next_number] == 0)
	{
		if (dq[next_number][6] != dq[number][2])
			solve(next_number, loc * -1);
	}

	rotate(number, loc);
}

int main()
{
	for (int i = 0; i < 4; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < 8; j++)
		{
			int temp = s[j] - '0';
			dq[i + 1].push_back(temp);
		}
	}

	cin >> K;

	for (int i = 0; i < K; i++)
	{
		int number, loc;
		memset(visit, 0, sizeof(visit));
		cin >> number >> loc;

		solve(number, loc);
	}

	for (int i = 1; i < 5; i++)
	{
		if (dq[i][0] == 1)
			sum += start;

		start *= 2;
	}

	cout << sum << endl;
}
