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

int N, K;
int day[35];
bool chk = true;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int i = a; i < b; i++)
			day[i]++;
	}

	cin >> K;
	for (int i = 1; i <= 31; i++)
	{
		if (day[i] > K)
		{
			chk = false;
			break;
		}
	}

	if (chk == true)
		cout << "1";
	else
		cout << "0";
}