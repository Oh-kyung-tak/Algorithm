#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int a, int b)
{
	string first = to_string(a) + to_string(b);
	string second = to_string(b) + to_string(a);

	if (first <= second)
		return false;
	else
		return true;
}

string solution(vector<int> numbers) {
	string answer = "";

	sort(numbers.begin(), numbers.end(), compare);

	if (numbers[0] == 0)
		answer = "0";
	else
	{
		for (int i = 0; i < numbers.size(); i++)
			answer += to_string(numbers[i]);
	}

	return answer;
}