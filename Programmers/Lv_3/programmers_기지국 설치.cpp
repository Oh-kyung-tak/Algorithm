#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<int> stations, int w)
{
	int answer = 0;
	int prev = 0;
	int next;
	int cover = (w * 2) + 1;

	for (int i = 0; i < stations.size(); i++)
	{
		next = stations[i] - w;

		int curr = next - prev - 1;

		if (curr > 0)
		{
			if (curr % cover == 0)
				answer += curr / cover;
			else
				answer += (curr / cover) + 1;
		}

		prev = stations[i] + w;
	}

	if (prev < n)
	{
		int curr = n - prev;

		if (curr % cover == 0)
			answer += curr / cover;
		else
			answer += (curr / cover) + 1;
	}

	return answer;
}