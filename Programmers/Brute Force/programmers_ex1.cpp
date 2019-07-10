#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;

	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	int max_cnt = 0;

	int people1[10] = { 1,2,3,4,5 };
	int people2[10] = { 2,1,2,3,2,4,2,5 };
	int people3[10] = { 3,3,1,1,2,2,4,4,5,5 };

	for (int i = 0; i < answers.size(); i++)
	{
		if (people1[i % 5] == answers[i])
			cnt1++;

		if (people2[i % 8] == answers[i])
			cnt2++;

		if (people3[i % 10] == answers[i])
			cnt3++;

	}

	max_cnt = max({ cnt1, cnt2, cnt3 });

	if (cnt1 == max_cnt)
		answer.push_back(1);
	if (cnt2 == max_cnt)
		answer.push_back(2);
	if (cnt3 == max_cnt)
		answer.push_back(3);
	return answer;

}