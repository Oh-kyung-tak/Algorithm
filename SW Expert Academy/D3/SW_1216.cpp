#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;
char word[101][101];


int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (test_case = 0; test_case < 10; test_case++)
	{
		int N;
		int max_cnt = 0;
		cin >> N;
		vector<string> v;

		for (int i = 1; i <= 100; i++)
			for (int j = 1; j <= 100; j++)
				cin >> word[i][j];

		for (int i = 1; i <= 100; i++)
		{
			string temp;
			for (int j = 1; j <= 100; j++)
				temp += word[i][j];

			v.push_back(temp);
		}

		for (int i = 1; i <= 100; i++)
		{
			string temp;
			for (int j = 1; j <= 100; j++)
				temp += word[j][i];

			v.push_back(temp);
		}

		for (int i = 0; i < v.size(); i++)
		{
			for (int j = 1; j <= v[i].size(); j++)
				for (int k = 0; k <= v[i].size() - j; k++)
				{
					string temp = v[i].substr(k, j);
					string re_temp = temp;
					reverse(re_temp.begin(), re_temp.end());

					if (temp == re_temp)
						max_cnt = max(max_cnt, j);

				}
		}

		cout << "#" << test_case + 1 << " " << max_cnt << endl;
	}

	return 0;
}