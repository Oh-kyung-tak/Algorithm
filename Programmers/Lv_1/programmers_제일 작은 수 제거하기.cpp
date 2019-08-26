#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int min_num = 999999999;

vector<int> solution(vector<int> arr) {
	vector<int> answer;

	for (int i = 0; i < arr.size(); i++)
		min_num = min(min_num, arr[i]);

	for (int i = 0; i < arr.size(); i++)
	{
		if (min_num == arr[i])
			arr.erase(arr.begin() + i);
	}

	if (arr.size() == 0)
		arr.push_back(-1);

	answer = arr;

	return answer;
}