#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <queue>
#include <functional>
#include <stack>

using namespace std;

int main()
{
	while (1)
	{
		string word;
		int size;
		stack<char> s;
		bool check = true;

		getline(cin,word);

		size = word.size();

		if (size == 1 && word[0] == '.')
			break;

		for (int i = 0; i < size; i++)
		{
			if (s.empty())
			{
				if (word[i] == '(' || word[i] == '[')
					s.push(word[i]);
				else
				{
					if (word[i] == ')' || word[i] == ']')
					{
						check = false;
						break;
					}
				}
			}
			else
			{
				if (word[i] == '(' || word[i] == '[')
					s.push(word[i]);
				else
				{
					if (word[i] == ')')
					{
						if (s.top() == '(')
							s.pop();
						else
						{
							check = false;
							break;
						}
					}
					else if (word[i] == ']')
					{
						if (s.top() == '[')
							s.pop();
						else
						{
							check = false;
							break;
						}
					}
				}
			}
		}
		
		if (!s.empty() || check == false)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}