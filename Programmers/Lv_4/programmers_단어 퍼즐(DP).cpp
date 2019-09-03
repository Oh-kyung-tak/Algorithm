#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;
map<string, int> m;
int answer = 0;
bool ck = false;

//효율성 통과 x
int solution(vector<string> strs, string t)
{
	int size = t.size();
	int st_size = strs.size();

	int ans[20001];
	int a, b;

	for (int i = 0; i < size; i++)
	{
		ans[i] = size + 1;

		for (int j = 0; j < st_size; j++)
		{
			a = strs[j].size() - 1;
			for (b = 0; b < strs[j].size(); b++)
			{
				if (!(a - b < 0 || i - b < 0) && strs[j][a - b] == t[i - b])
					continue;
				else
					break;

			}

			if (b == strs[j].size())
			{
				if (i - b >= 0)
					ans[i] = min(ans[i], ans[i - b] + 1);
				else
					ans[i] = 1;
			}
		}
	}

	answer = ans[size - 1];

	if (answer == size + 1)
		answer = -1;

	return answer;
}
