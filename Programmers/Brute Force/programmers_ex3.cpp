#include <string>
#include <vector>
#include <string.h>

using namespace std;

int solution(vector<vector<int>> baseball) {
	int answer = 0;
	bool ans[1000];

	memset(ans, 1, sizeof(ans));

	for (int i = 123; i <= 987; i++)
	{
		string ss = to_string(i);

		if (ss[0] == '0' || ss[1] == '0' || ss[2] == '0')
			ans[i] = false;

		if (ss[0] == ss[1] || ss[1] == ss[2] || ss[0] == ss[2])
			ans[i] = false;
	}

	for (int i = 0; i < baseball.size(); i++)
	{
		string temp = to_string(baseball[i][0]);
		int strike = baseball[i][1];
		int ball = baseball[i][2];

		for (int j = 123; j <= 987; j++)
		{
			if (ans[j] == true)
			{
				string t_temp = to_string(j);
				int t_strike = 0;
				int t_ball = 0;

				for (int aa = 0; aa < 3; aa++)
				{
					for (int bb = 0; bb < 3; bb++)
					{
						if (temp[aa] == t_temp[bb])
						{
							if (aa == bb)
								t_strike++;
							else
								t_ball++;
						}
					}
				}

				if (strike != t_strike || ball != t_ball)
					ans[j] = false;
			}
		}
	}

	for (int i = 123; i <= 987; i++)
		if (ans[i])
			answer++;

	return answer;
}