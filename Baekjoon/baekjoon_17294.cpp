#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

string word;
int main()
{
	cin >> word;

	if (word.size() == 1)
	{
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << endl;
		return 0;
	}
	else
	{
		int cnt = word[1] - word[0];
		for (int i = 1; i < word.size() - 1; i++)
		{
			if (cnt != word[i + 1] - word[i])
			{
				cout << "흥칫뿡!! <(￣ ﹌ ￣)>" << endl;
				return 0;
			}
		}
	}
	cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << endl;
}