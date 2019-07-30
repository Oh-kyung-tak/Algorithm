#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

string word;
stack<char> s;

int num[10];
int sum = 0;
int ans = 0;

int main()
{
	cin >> word;

	for (int i = 0; i < 10; i++)
		num[i] = 0;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == '(' || word[i] == '[' || word[i] == '{')
		{
			if (word[i] == '(')
				sum += 1;
			else if (word[i] == '{')
				sum += 2;
			else
				sum += 3;

			s.push(word[i]);
		}
		else
		{
			if (word[i] >= '0' && word[i] <= '9')
				s.push(word[i]);
			else
			{
				if (word[i] == ')')
				{
					if (s.top() >= '0' && s.top() <= '9')
					{
						num[s.top() - '0'] = max(num[s.top() - '0'], sum);
						s.pop();
					}
					s.pop();
					sum -= 1;
				}
				else if (word[i] == '}')
				{
					if (s.top() >= '0' && s.top() <= '9')
					{
						num[s.top() - '0'] = max(num[s.top() - '0'], sum);
						s.pop();
					}
					s.pop();
					sum -= 2;
				}
				else
				{
					if (s.top() >= '0' && s.top() <= '9')
					{
						num[s.top() - '0'] = max(num[s.top() - '0'], sum);
						s.pop();
					}
					s.pop();
					sum -= 3;
				}
			}
		}
	}

	for (int i = 0; i < 10; i++)
		ans = max(ans, num[i]);
	
	cout << ans << endl;

}