#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first > b.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	//장르, 장르 총 수
	map<string, int> m;
	//장르, 장르 index
	map<string, int> m_index;

	//장르에 대한 플레이 수, index
	vector<pair<int, int>> v[101];
	//장르 총 플레이 수, index
	vector<pair<int, int>> v_index;
	int cnt = 0;

	for (int i = 0; i < genres.size(); i++)
	{
		if (!m[genres[i]])
		{
			m_index[genres[i]] = cnt;
			m[genres[i]] += plays[i];
			v[cnt].push_back({ plays[i], i });
			cnt++;
		}
		else
		{
			v[m_index[genres[i]]].push_back({ plays[i], i });
			m[genres[i]] += plays[i];
		}
	}
	
	for (auto it = m.begin(); it != m.end(); it++)
		v_index.push_back({ it->second, m_index[it->first] });
	
	sort(v_index.begin(), v_index.end(), cmp);

	for (int i = 0; i < cnt; i++)
		sort(v[i].begin(), v[i].end(), cmp);
	

	for (int i = 0; i < v_index.size(); i++)
	{
		int cnt = 0;
		for (int j = 0; j < v[v_index[i].second].size(); j++)
		{
			if (cnt >= 2)
				break;

			answer.push_back(v[v_index[i].second][j].second);
			cnt++;
		}
	}

	return answer;
}