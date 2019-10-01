#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int N;
int temp;
int chess[13];
int ans = 0;

bool check(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (chess[i] == chess[n] || abs(chess[n] - chess[i]) == abs(n - i))
			return false;
	}
	return true;
}

void Nqueen(int n)
{
	if (n == temp)
	{
		ans++;
		return;
	}

	for (int i = 0; i < temp; i++)
	{
		chess[n] = i;
		if (check(n))
			Nqueen(n + 1);
	}
}

int main()
{
	cin >> N;
	
	while (N--)
	{
		ans = 0;
		memset(chess, 0, sizeof(chess));

		cin >> temp;

		Nqueen(0);
		cout << ans << endl;
	}
}