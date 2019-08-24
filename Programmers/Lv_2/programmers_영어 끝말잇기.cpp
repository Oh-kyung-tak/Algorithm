#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
	map<string, int> m;
	vector<int> answer;
	
	string lastword = words[0];

	m[words[0]]++;

	for (int i = 1; i < words.size(); i++)
	{
		if (m[words[i]] || lastword.at(lastword.size() -1) != words[i].at(0))
		{
			answer.push_back(i % n + 1);
			answer.push_back(i / n + 1);
			break;
		}
		
		lastword = words[i];
		m[words[i]]++;
	}

	if (answer.size() == 0)
	{
		answer.push_back(0);
		answer.push_back(0);
	}
		
	return answer;
}