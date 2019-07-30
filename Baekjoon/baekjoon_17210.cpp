#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

long long int N;
int cnt;
int main()
{
	cin >> N;
	cin >> cnt;

	if (N > 5)
		cout << "Love is open door";
	else
	{
		for (int i = 1; i < N; i++)
		{
			if (cnt == 0)
			{
				cnt = 1;
				cout << cnt << endl;
			}
			else
			{
				cnt = 0;
				cout << cnt << endl;
			}
		}
	}
}