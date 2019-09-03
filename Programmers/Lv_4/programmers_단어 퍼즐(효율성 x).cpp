#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;
map<string, int> m;
int answer = 0;
bool ck = false;

int solution(vector<string> strs, string t)
{
	queue<pair<string, int>> q;

	q.push({ "", 0 });

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			string temp = q.front().first;
			int c_temp = q.front().second;
			q.pop();

			if (temp == t)
			{
				ck = true;
				return answer;
			}
				
			for (int j = 0; j < strs.size(); j++)
			{
				string t_word = temp + strs[j];
				if (t_word == t.substr(0, c_temp + strs[j].size()))
				{
					if (!m[t_word])
					{
						m[t_word]++;
						q.push({ t_word, c_temp + strs[j].size() });
					}
				}
			}
		}

		answer++;
	}

	return -1;
}
