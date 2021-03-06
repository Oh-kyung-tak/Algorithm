#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> routes)
{
	int answer = 1;

	sort(routes.begin(), routes.end());
	int temp_num = routes[0][1];

	for (int i = 1; i < routes.size(); i++)
	{
		if (routes[i][0] > temp_num)
		{
			answer++;
			temp_num = routes[i][1];
		}
		else
		{
			if (routes[i][1] < temp_num)
				temp_num = routes[i][1];
		}
	}

	return answer;
}