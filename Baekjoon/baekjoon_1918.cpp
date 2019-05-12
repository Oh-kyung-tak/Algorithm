#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;

stack<char> s;
string word;
string post_word;

int priority(char c)
{
	if (c == '*' || c == '/')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return 0;
}

int main()
{
	cin >> word;
	int size = word.size();

	for (int i = 0; i < size; i++)
	{
		int pr = priority(word[i]);
		char temp = word[i];

		if (temp == '*' || temp == '/' || temp == '+' || temp == '-')
		{
			// 우선순위가 자신보다 크거나 같은 연산자는 다 처리해줘야함
			while (!s.empty() && priority(s.top()) >= pr)
			{
				post_word += s.top();
				s.pop();
			}
			s.push(temp);
		}
		else if (temp == '(')
			s.push(temp);
		else if (temp == ')')
		{
			while (s.top() != '(')
			{
				post_word += s.top();
				s.pop();
			}
			s.pop();
		}
		else
			post_word += temp;
	}

	while (!s.empty())
	{
		post_word += s.top();
		s.pop();
	}

	cout << post_word << endl;
}