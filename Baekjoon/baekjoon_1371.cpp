#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

string word;
int alpa[26];
int max_cnt = 0;
int main()
{
	while (cin >> word)
	{
		for (int i = 0; i < word.size(); i++)
			alpa[word[i] - 'a']++;

		word.clear();
	}

	for (int i = 0; i < 26; i++)
		max_cnt = max(max_cnt, alpa[i]);

	for (int i = 0; i < 26; i++)
	{
		if (max_cnt == alpa[i])
			cout << char(i + 97);
	}

}

