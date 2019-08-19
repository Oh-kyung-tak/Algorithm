#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	int i = 0;
	int e = 0;
	sort(people.begin(), people.end());

	for (i = people.size() - 1; i > e; i--)
	{
		if (people[i] + people[e] <= limit)
		{
			answer++;
			e++;
		}
		else
			answer++;
	}

	if (i == e)
		answer++;

	return answer;
}