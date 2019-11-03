#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> bombs)
{
	int answer = 0;
	int start = 0;

	sort(bombs.begin(), bombs.end());

	for (int i = 0; i < bombs.size(); i++)
	{
		start++;
		if (start > bombs[i])
			break;
		answer++;

	}

	return answer;
}