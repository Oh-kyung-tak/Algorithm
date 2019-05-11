#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int chess[15];
int cnt = 0;

bool find(int i)
{
	for (int j = 0; j < i; j++)
	{
		if (chess[j] == chess[i] || abs(chess[i] - chess[j]) == (i - j))
			return false;
	}
	return true;
}
void check_q(int i)
{
	if (i == N)
		cnt++;
	else
	{
		for (int j = 0; j < N; j++)
		{
			chess[i] = j;
			if (find(i))
				check_q(i + 1);
		}
	}
}
int main()
{
	cin >> N;
	check_q(0);

	cout << cnt << endl;
}
