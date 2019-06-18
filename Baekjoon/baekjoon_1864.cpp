#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#define MAX 1001

using namespace std;

map<char, int> m;

int main()
{
	m['-'] = 0;
	m['\\'] = 1;
	m['('] = 2;
	m['@'] = 3;
	m['?'] = 4;
	m['>'] = 5;
	m['&'] = 6;
	m['%'] = 7;
	m['/'] = -1;

	while (1)
	{
		string str;
		stack<char> s;
		int sum = 0;
		int start = 1;

		cin >> str;

		if (str == "#")
			return 0;

		for (int i = 0; i < str.size(); i++)
			s.push(str[i]);

		while (!s.empty())
		{
			sum += start * m[s.top()];
			s.pop();
			start *= 8;
		}

		cout << sum << endl;
	}
}