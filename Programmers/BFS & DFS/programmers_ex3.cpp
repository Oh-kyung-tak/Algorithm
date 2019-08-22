#include <string>
#include <vector>
#include <map>
#include <queue>
#include <iostream>

using namespace std;
map<string, int> m;
int cnt = 0;

int check(string b, string t, vector<string> v)
{
	queue<string> q;
	m[b]++;

	q.push(b);

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			string temp = q.front();
			q.pop();

			if (temp == t)
				return true;

			for (int j = 0; j < v.size(); j++)
			{
				int diff = 0;
				for (int k = 0; k < v[j].size(); k++)
					if (temp[k] != v[j][k])
						diff++;

				if (diff == 1 && !m[v[j]])
				{
					m[v[j]]++;
					q.push(v[j]);
				}
			}
		}
		cnt++;
	}
	return false;
}

int solution(string begin, string target, vector<string> words) {
	int answer = 0;
	bool ck = false;

	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] == target)
		{
			ck = true;
			break;
		}
	}

	if (ck)
	{
		if (check(begin, target, words))
			return cnt;
		else
			return 0;
	}
	else
		return 0;
}