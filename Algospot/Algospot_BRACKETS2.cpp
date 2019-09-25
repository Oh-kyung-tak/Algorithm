#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int N;

int main()
{
	cin >> N;

	while(N--)
	{
		string word;
		stack<char> s;
		bool ck = true;

		cin >> word;

		int size = word.size();

		for (int i = 0; i < size; i++)
		{
			if (s.empty())
				s.push(word[i]);
			else
			{
				if (word[i] == ')')
				{
					if (s.top() == '(')
						s.pop();
					else
					{
						ck = false;
						break;
					}
				}
				else if (word[i] == '}')
				{
					if (s.top() == '{')
						s.pop();
					else
					{
						ck = false;
						break;
					}
				}
				else if (word[i] == ']')
				{
					if (s.top() == '[')
						s.pop();
					else
					{
						ck = false;
						break;
					}
				}
				else
					s.push(word[i]);
				
			}
		}

		if (ck && s.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}