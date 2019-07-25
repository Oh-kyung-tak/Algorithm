#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <stack>
using namespace std;

stack<char> s1;
stack<char> s2;
stack<int> ans;
string w1, w2;
int up = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> w1 >> w2;

	if (w1.size() > w2.size())
	{
		for (int i = 0; i < w1.size() - w2.size(); i++)
			s2.push('0');

		for (int i = 0; i < w1.size(); i++)
			s1.push(w1[i]);
			
		for (int i = 0; i < w2.size(); i++)
			s2.push(w2[i]);
	}
	else
	{
		for (int i = 0; i < w2.size() - w1.size(); i++)
			s1.push('0');

		for (int i = 0; i < w1.size(); i++)
			s1.push(w1[i]);

		for (int i = 0; i < w2.size(); i++)
			s2.push(w2[i]);
	}

	while(!s1.empty())
	{
		int ss = (s1.top() - '0') + (s2.top() - '0') + up;

		if (ss >= 10)
		{
			ss -= 10;
			ans.push(ss);
			up = 1;
		}
		else
		{
			ans.push(ss);
			up = 0;
		}

		s1.pop();
		s2.pop();
	}
	
	if (up == 1)
		ans.push(1);

	while (!ans.empty())
	{
		cout << ans.top();
		ans.pop();
	}
}