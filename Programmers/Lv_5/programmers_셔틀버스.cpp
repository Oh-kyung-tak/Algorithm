#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

string solution(int n, int t, int m, vector<string> timetable) {
	int answer = 0;
	string w_answer = "";
	int start = 540;
	queue<int> q;

	sort(timetable.begin(), timetable.end(), less<string>());

	for (int i = 0; i < timetable.size(); i++)
	{
		string temp = timetable[i];
		int hour = stoi(temp.substr(0, 2)) * 60;
		int min = stoi(temp.substr(3, 2));
		
		q.push(hour + min);
	}

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		int tmp = 0;

		while (!q.empty())
		{
			tmp = q.front();
			if (tmp <= start)
			{
				cnt++;
				q.pop();
			}

			if (cnt == m || tmp > start)
				break;
		}

		// 막차에 사람이 가득 차면 마지막 사람보다 1분 전
		// 막차에 사람이 없으면 셔틀 버스 올때 타면 됨.
		if (cnt < m)
			answer = start;
		else
			answer = tmp - 1;

		start += t;
	}

	string h_s, m_s;

	if (answer / 60 < 10)
		h_s = "0" + to_string(answer / 60);
	else
		h_s = to_string(answer / 60);

	if (answer % 60 < 10)
		m_s = "0" + to_string(answer % 60);
	else
		m_s = to_string(answer % 60);

	w_answer = h_s + ":" + m_s;

	return w_answer;
}