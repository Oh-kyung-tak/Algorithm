#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int sum[2001];

int solution(vector<int> cookie) {
	int answer = 0;

	if (cookie.size() == 2)
	{
		if (cookie[0] == cookie[1])
			answer = cookie[0];
	}
	else
	{
		for (int i = 0; i < cookie.size() - 1; i++)
		{
			int f_index = i;
			int f_sum = cookie[i];

			int b_index = i + 1;
			int b_sum = cookie[i + 1];

			while (true)
			{
				if (f_sum == b_sum)
					answer = max(answer, f_sum);

				if (f_index > 0 && f_sum <= b_sum)
				{
					f_index--;
					f_sum += cookie[f_index];
				}
				else if (b_index < cookie.size() - 1 && f_sum >= b_sum)
				{
					b_index++;
					b_sum += cookie[b_index];
				}
				else
					break;
			}
		}
	}

	return answer;
}