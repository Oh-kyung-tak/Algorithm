#include <iostream>
#include <string>
#include <string.h>
#include <stack>

using namespace std;

int a_score, b_score;
int a_arr[11];
int b_arr[11];
stack<char> s;

int main()
{
	for (int i = 0; i < 10; i++)
		cin >> a_arr[i];

	for (int i = 0; i < 10; i++)
		cin >> b_arr[i];

	for (int i = 0; i < 10; i++)
	{
		if (a_arr[i] > b_arr[i])
		{
			a_score += 3;
			s.push('A');
		}
		else if (a_arr[i] < b_arr[i])
		{
			b_score += 3;
			s.push('B');
		}
		else
		{
			a_score += 1;
			b_score += 1;
			s.push('D');
		}
	}

	cout << a_score << " " << b_score << endl;

	if (a_score > b_score)
		cout << 'A' << endl;
	else if (a_score < b_score)
		cout << 'B' << endl;
	else
	{
		while (1)
		{
			if (s.empty())
			{
				cout << 'D' << endl;
				return 0;
			}
			if (s.top() != 'D')
			{
				cout << s.top() << endl;
				return 0;
			}
			else
				s.pop();
		}
	}
}
