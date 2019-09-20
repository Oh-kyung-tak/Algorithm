#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <map>
#include <stack>

using namespace std;

string word;
string key;

int main()
{
	getline(cin, word);
	cin >> key;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			int w_cnt = word[i] - 'a';
			int k_cnt = key[i % key.size()] - 'a' + 1;

			int temp = w_cnt - k_cnt;
			
			if (temp < 0)
				cout << (char)(temp + 'z' + 1);
			else
				cout << (char)(temp + 'a');
			
		}
		else
			cout << word[i];
	}
}