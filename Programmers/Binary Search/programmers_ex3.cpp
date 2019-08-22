#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
	int answer = 0;
	
	rocks.push_back(0);
	rocks.push_back(distance);
	sort(rocks.begin(), rocks.end());

	int start = 0;
	int end = distance;

	while (start <= end)
	{
		int mid = (start + end) / 2;

		int idx = 0;
		int sum = 0;
		int cnt = 0;

		for (int i = 1; i < rocks.size(); i++)
		{
			if (rocks[i] - rocks[idx] >= mid)
			{
				idx = i;
				sum += cnt;
				cnt = 0;
			}
			else
				cnt++;
		}

		sum += cnt;

		if (sum > n)
			end = mid - 1;
		else
		{
			answer = mid;
			start = mid + 1;
		}
			
	}

	return answer;
}