#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <map>
#include <stack>

using namespace std;

int N;
map<string, int> m;
int ex[1001];
int cnt = 0;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		m[temp] = i;
	}

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		ex[i] = m[temp];
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (ex[i] > ex[j])
			{
				cnt++;
				break;
			}
		}
	}

	cout << cnt << endl;
}