#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

string word;
int alpa[27];
char al[27] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
deque<char> q;
int cnt = 0;

int main()
{
	cin >> word;

	for (int i = 0; i < word.size(); i++)
		alpa[word[i] - 'A']++;
	
	for (int i = 0; i < 27; i++)
	{
		if (alpa[i] % 2 == 1)
		{
			q.push_back(al[i]);
			cnt++;
			alpa[i]--;
		}
	}
	
	if (cnt >= 2)
		cout << "I'm Sorry Hansoo" << endl;
	else
	{
		for (int i = 27; i >= 0; i--)
		{
			for (int j = 0; j < alpa[i] / 2; j++)
			{
				q.push_front(al[i]);
				q.push_back(al[i]);
			}
		}

		while (!q.empty())
		{
			cout << q.front();
			q.pop_front();
		}
	}
}