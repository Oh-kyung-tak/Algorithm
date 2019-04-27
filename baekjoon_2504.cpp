#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<stack>

using namespace std;

stack<int> s;
string word;
int cnt = 0;
int gob = 1;
int sum = 0;
int main()
{
	cin >> word;

	for(int cnt = 0; cnt < word.size(); cnt++)
	{
		char c = word[cnt];

		if (s.empty())
		{
			if (c == ')' || c == ']')
			{
				cout << "0" << endl;
				return 0;
			}
			else
			{
				if (c == '(')
					gob *= 2;
				else
					gob *= 3;

				s.push(c);
			}
		}
		else
		{
			if (c == '(')
			{
				gob *= 2;
				s.push(c);
			}
			else if (c == '[')
			{
				gob *= 3;
				s.push(c);
			}

			if (c == ')')
			{
				if (s.top() != '(')
				{
					cout << "0" << endl;
					return 0;
				}

				if (word[cnt - 1] == '(')
					sum += gob;
				s.pop();
				gob /= 2;
			}
			else if (c == ']')
			{
				if (s.top() != '[')
				{
					cout << "0" << endl;
					return 0;
				}

				if (word[cnt - 1] == '[')
					sum += gob;

				s.pop();
				gob /= 3;
			}	
		}
	}
	
	if (!s.empty())
		cout << "0" << endl;
	else
		cout << sum << endl;
}
