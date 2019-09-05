#include <string>
#include <iostream>
#include <math.h>

using namespace std;

int solution(string dartResult) {
	int answer = 0;
	int cnt = 1;
	int tmp = 0;
	int score[4] = { 0,0,0,0};

	for (int i = 0; i < dartResult.size(); i++)
	{
		if (dartResult[i] >= '0' && dartResult[i] <= '9')
			tmp = (tmp * 10) + (dartResult[i] - '0');
	
		if (dartResult[i] == 'S')
		{
			score[cnt] = tmp;
			tmp = 0;
			cnt++;
		}

		if (dartResult[i] == 'D')
		{
			score[cnt] = pow(tmp, 2);
			tmp = 0;
			cnt++;
		}

		if (dartResult[i] == 'T')
		{
			score[cnt] = pow(tmp, 3);
			tmp = 0;
			cnt++;
		}

		if (dartResult[i] == '*')
		{
			score[cnt - 2] *= 2;
			score[cnt - 1] *= 2;
		}

		if (dartResult[i] == '#')
			score[cnt - 1] *= -1;
	}

	for (int i = 1; i <= 3; i++)
		answer += score[i];

	return answer;
}