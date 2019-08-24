#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	bool ck = false;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
			ck = false;
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;

			if (ck == false && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;

			ck = true;
		}
	}

	answer = s;

	return answer;
}