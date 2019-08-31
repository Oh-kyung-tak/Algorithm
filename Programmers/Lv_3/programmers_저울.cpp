#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> weight) {

	sort(weight.begin(), weight.end());
	int answer = weight[0];
	
	if (answer != 1)
		return answer = 1;

	for (int i = 1; i < weight.size(); i++)
	{
		if (answer + 1 >= weight[i])
			answer += weight[i];
		else
			break;
	}

	return answer + 1;
}