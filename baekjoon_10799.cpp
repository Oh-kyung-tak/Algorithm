#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>

using namespace std;
stack<char> s;

int main()
{
	string word;
	int sum = 0;

	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == '(')
			s.push(word[i]);
		else
		{
			s.pop();

			if (word[i - 1] == '(')
				sum += s.size();
			else
				sum++;
		}
	}

	cout << sum << endl;
}

