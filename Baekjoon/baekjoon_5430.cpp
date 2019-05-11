#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<stack>
#include<math.h>

using namespace std;

int T;

int main()
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string word;
		deque<int> dq;
		string dq_word;

		int tmp = 0;
		int d_cnt = 0;
		int cnt;
		bool direction = true;

		cin >> word;
		cin >> cnt;
		cin >> dq_word;

		for (int i = 0; i < word.size(); i++)
			if (word[i] == 'D')
				d_cnt++;

		for (int i = 0; i < dq_word.size(); i++) {
			if (dq_word[i] == ',' || dq_word[i] == ']')
			{
				if (dq_word[i - 1] == '[') 
					break;
				dq.push_back(tmp);
				tmp = 0;
			}
			else if (dq_word[i] != '[' && dq_word[i] != ']')
				tmp = tmp * 10 + dq_word[i] - '0';
		}

		if (cnt - d_cnt < 0)
		{
			cout << "error" << endl;
			continue;
		}

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] == 'R')
			{
				if (direction == true)
					direction = false;
				else
					direction = true;
			}
			else
			{
				if (direction == true)
					dq.pop_front();
				else
					dq.pop_back();
			}
		}

		cout << '[';

		while (!dq.empty())
		{
			
			if (direction == true)
			{
				cout << dq.front();
				dq.pop_front();
			}
			else
			{
				cout << dq.back();
				dq.pop_back();
			}
			
			if (dq.size() > 0)
				cout << ',';
			
		}

		cout << ']' << endl;
	}
}
