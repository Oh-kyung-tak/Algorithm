#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int s) {
	vector<int> answer;
	int cnt = s / n;

	if (cnt == 0)
		answer.push_back(-1);
	else
	{
		int divide_round = n - (s % n);
	
		for (int i = 1; i <= n; i++)
		{
			if (divide_round >= i)
				answer.push_back(cnt);
			else
				answer.push_back(cnt + 1);
		}
	}

	return answer;
}