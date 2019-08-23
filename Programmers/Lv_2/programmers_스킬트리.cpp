#include <string>
#include <vector>
#include <iostream>

using namespace std;
int alpa[26] = { 0, };

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;

	for (int i = 0; i < skill.size(); i++)
		alpa[skill[i] - 'A']++;
	
	for (int i = 0; i < skill_trees.size(); i++)
	{
		string temp = skill_trees[i];
		int cnt = 0;
		bool ck = true;

		for (int j = 0; j < temp.size(); j++)
		{
			
			if (!alpa[temp[j] - 'A'])
				continue;

			if (temp[j] == skill[cnt])
				cnt++;
			else
			{
				ck = false;
				break;
			}
		}

		if (ck)
			answer++;
	}
	return answer;
}