#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> budgets, int M) {
	int answer = 0;
	
	sort(budgets.begin(), budgets.end());
	int start = 0;
	int end = budgets[budgets.size() - 1];

	while (start <= end)
	{
		int mid = (start + end) / 2;
		int sum = 0;

		for (int i = 0; i < budgets.size(); i++)
		{
			if (mid <= budgets[i])
				sum += mid;
			else
				sum += budgets[i];
		}

		if (sum > M)
			end = mid - 1;
		else
			start = mid + 1;
	}
	
	answer = start - 1;

	return answer;
}