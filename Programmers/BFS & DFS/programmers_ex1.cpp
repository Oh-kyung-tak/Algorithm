#include <string>
#include <vector>

using namespace std;

int answer = 0;

void check(vector<int> v, int tar, int cnt)
{
	if (v.size() == cnt)
	{
		int sum = 0;
		for (int i = 0; i < v.size(); i++)
			sum += v[i];

		if (sum == tar)
			answer++;

		return;
	}
	else
	{
		v[cnt] *= 1;
		check(v, tar, cnt + 1);

		v[cnt] *= -1;
		check(v, tar, cnt + 1);
	}
}

int solution(vector<int> numbers, int target) {


	check(numbers, target, 0);

	return answer;
}