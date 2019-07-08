#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>

using namespace std;
int T, test_case;

int num[1001];

int check_num(int n)
{
	int tt = 1;

	while (1)
	{
		if (num[tt] <= n && num[tt + 1] > n)
			return tt;

		tt++;
	}
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	
	int cnt = 1;
	num[1] = 1;

	for (int i = 2; i <= 1001; i++)
	{
		num[i] = num[i - 1] + cnt;
		cnt++;
	}

	for (test_case = 0; test_case < T; test_case++)
	{
		string word;
		cin >> word;
		int ans = 0;

		if (word[0] - '0' == 1)
			ans++;

		for (int i = 1; i < word.size(); i++)
		{
			if (word[i - 1] == word[i])
				continue;
			else
				ans++;
		}
		cout << "#" << test_case + 1 << " " << ans << endl;

	}

	return 0;
}