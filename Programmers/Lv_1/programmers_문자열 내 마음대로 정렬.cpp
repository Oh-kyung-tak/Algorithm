#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int num;

bool cmp(string a, string b)
{
	if (a.at(num) != b.at(num))
		return a.at(num) < b.at(num);
	else
		return a < b;
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	answer = strings;
	num = n;

	sort(answer.begin(), answer.end(), cmp);
	return answer;
}