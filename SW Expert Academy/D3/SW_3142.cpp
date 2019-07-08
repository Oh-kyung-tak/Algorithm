#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int n, m;
		int cnt = 0;
		cin >> n >> m;

		for (int i = 1; i <= m; i++)
		{
			int sum = i * 1 + 2 * (m - i);
			
			if (sum == n)
			{
				cnt = i;
				break;
			}
		}
		cout << "#" << Test_case << " " << cnt << " " << m - cnt << endl;
	}
}