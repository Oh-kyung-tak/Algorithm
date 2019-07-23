#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

string word;

string min_word = "zzzzzzzzz";

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> word;


	for (int i = 0; i < word.size() - 2; i++)
	{
		if (i == 0)
		{
			for (int j = i + 1; j < word.size() - 1; j++)
			{
				for (int k = j + 1; k < word.size(); k++)
				{
					string a = word.substr(i, j - i);
					string b = word.substr(j, k - j);
					string c = word.substr(k);

					reverse(a.begin(), a.end());
					reverse(b.begin(), b.end());
					reverse(c.begin(), c.end());

					string temp = a + b + c;

					min_word = min(min_word, temp);
				}
			}
		}
		else
			break;
	}

	cout << min_word << endl;
}