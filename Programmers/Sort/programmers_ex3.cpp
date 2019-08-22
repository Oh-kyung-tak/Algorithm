#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
	int answer = -1;
	int cnt = 0;
	int c_size = citations.size();

	sort(citations.begin(), citations.end(), greater<int>());

	for (int i = 0; i < c_size; i++)
	{
		if (citations[i] <= i)
		{
			answer = i;
			break;
		}
	}
	if (answer == -1)
		answer = citations.size();

	return answer;
}