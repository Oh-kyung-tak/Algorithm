#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> weight) {
	int answer = 0;
	sort(weight.begin(), weight.end());

	for (int i = 0; i < weight.size(); i++)
	{
		if (answer + 1 >= weight[i])
			answer += weight[i];
		else
			break;
	}
	return answer + 1;
}