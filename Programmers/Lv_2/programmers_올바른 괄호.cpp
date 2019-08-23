#include <string>
#include <iostream>
#include <stack>

using namespace std;
stack<char> st;

bool solution(string s)
{
	bool answer = true;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
			st.push(s[i]);
		else
		{
			if (st.empty())
			{
				answer = false;
				break;
			}
			else
				st.pop();
		}
	}

	if (!st.empty())
		answer = false;

	return answer;
}