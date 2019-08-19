#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	map<string, int> m;
	vector<string> v;

	for (int i = 0; i < clothes.size(); i++)
	{
		if (!m[clothes[i][1]])
			v.push_back(clothes[i][1]);

		m[clothes[i][1]]++;

	}

	for (int i = 0; i < v.size(); i++)
		answer *= (m[v[i]] + 1);

	return answer - 1;
}