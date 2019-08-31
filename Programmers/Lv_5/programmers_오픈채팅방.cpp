#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>

using namespace std;

vector<string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str);
	string temp;

	while (getline(ss, temp, delimiter)) {
		internal.push_back(temp);
	}

	return internal;
}

vector<string> solution(vector<string> record) {
	vector<string> answer;
	map<string, string> m;

	for (int i = 0; i < record.size(); i++)
	{
		vector<string> temp = split(record[i], ' ');

		if (temp[0] == "Enter" || temp[0] == "Change")
			m[temp[1]] = temp[2];
	}

	for (int i = 0; i < record.size(); i++)
	{
		vector<string> temp = split(record[i], ' ');

		if (temp[0] == "Enter")
			answer.push_back(m[temp[1]] + "님이 들어왔습니다.");
		else if (temp[0] == "Leave")
			answer.push_back(m[temp[1]] + "님이 나갔습니다.");
	}

	return answer;
}