#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int red) {
	vector<int> answer;
	int squre = brown + red;

	for (int i = squre; i >= 1; i--)
	{
		if (squre % i == 0)
		{
			int sum = (i * 2) + ((squre / i) - 2) * 2;
			if (sum == brown)
			{
				answer.push_back(i);
				answer.push_back(squre / i);
				break;
			}
		}
	}
	return answer;
}