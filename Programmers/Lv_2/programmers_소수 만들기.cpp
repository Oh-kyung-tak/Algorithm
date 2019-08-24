#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool prime[3001];

int solution(vector<int> nums) {
	int answer = 0;

	sort(nums.begin(), nums.end());

	for (int i = 2; i <= sqrt(3000); i++)
	{
		if (!prime[i])
		{
			for (int j = i * i; j <= 3000; j += i)
				prime[j] = true;
		}
	}
	
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			for (int k = j + 1; k < nums.size(); k++)
				if (!prime[nums[i] + nums[j] + nums[k]])
					answer++;
		}
	}
	return answer;
}