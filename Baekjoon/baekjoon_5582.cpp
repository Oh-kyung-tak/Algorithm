#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

//비교 대상 없을시 MAX = 0 으로 초기값 -1로 하면 안됨!!
int N;
int dp[4003][4003];
string w1, w2;
int max_cnt = 0;

int main()
{
	cin >> w1 >> w2;

	w1 = '0' + w1;
	w2 = '0' + w2;
	
	int w1_len = w1.size();
	int w2_len = w2.size();

	for (int i = 0; i < w1_len; i++)
	{
		for (int j = 0; j < w2_len; j++)
		{
			if (i == 0 || j == 0)
			{
				dp[i][j] = 0;
				continue;
			}

			if (w1[i] == w2[j])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;

				if (max_cnt < dp[i][j])
					max_cnt = dp[i][j];
			}

		}
	}

	cout << max_cnt << endl;
}