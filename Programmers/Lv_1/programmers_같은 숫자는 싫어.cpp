#include <vector>
#include <iostream>
#include <map>

using namespace std;


vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	int current = arr[0];
	answer.push_back(arr[0]);

	for (int i = 1; i < arr.size(); i++)
	{
		if (current == arr[i])
			continue;
		else
		{
			answer.push_back(arr[i]);
			current = arr[i];
		}
	}

	return answer;
}