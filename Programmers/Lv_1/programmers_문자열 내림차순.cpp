#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	vector<char> v;

	string answer = "";

	for (int i = 0; i < s.size(); i++)
		v.push_back(s[i]);

	sort(v.begin(), v.end());

	for (int i = s.size() - 1; i >= 0; i--)
		answer += v[i];

	return answer;
}