#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool check(string tour, vector<vector<string>>& tickets, vector<bool>& visit, vector<string>& temp, vector<string>& answer, int cnt)
{
	temp.push_back(tour);

	if (cnt == tickets.size())
	{
		answer = temp;
		return true;
	}

	for (int i = 0; i < tickets.size(); i++)
	{
		if (tickets[i][0] == tour && !visit[i])
		{
			visit[i] = true;

			bool sc = check(tickets[i][1], tickets, visit, temp, answer, cnt + 1);

			if (sc)
				return true;

			visit[i] = false;
		}
	}
	temp.pop_back();
	return false;
}

vector<string> solution(vector<vector<string>> tickets) {
	vector<string> answer, temp;
	vector<bool> visit(tickets.size(), false);

	sort(tickets.begin(), tickets.end());

	check("ICN", tickets, visit, temp, answer, 0);
	return answer;
}