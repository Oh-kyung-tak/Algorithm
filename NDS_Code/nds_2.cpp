#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

#define min_cnt 999999999

using namespace std;

map<int, int> m;
map<int, int> m_idx;
map<int, int> m_cnt;

int solution(vector<int> arr)
{
	int answer = min_cnt;

	for (int i = 0; i < arr.size(); i++)
	{
		m_cnt[arr[i]]++;

		if (m_cnt[arr[i]] == 1)
			m[arr[i]] = min_cnt;
		else
		{
			int temp = min(m[arr[i]], i - m_idx[arr[i]]);
			m[arr[i]] = temp;
		}

		m_idx[arr[i]] = i;
	}

	for (map<int,int>::iterator it = m.begin(); it != m.end(); it++)
		answer = min(answer, it->second);

	if (answer == min_cnt)
		answer = -1;

	return answer;
}