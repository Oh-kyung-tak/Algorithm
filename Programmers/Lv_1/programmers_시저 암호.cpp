#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	string answer = "";

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = ((s[i] - 'a' + n) % 26) + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = ((s[i] - 'A' + n) % 26) + 'A';
		}

		answer += s[i];
	}

	return answer;
}