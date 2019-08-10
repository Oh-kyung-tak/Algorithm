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
int N;
int alpa[26];

int main()
{
	cin >> N;

	while (N--)
	{
		bool ck = true;

		cin >> word;

		memset(alpa, 0, sizeof(alpa));

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] >= 'A' && word[i] <= 'Z')
				word[i] += 32;

			alpa[word[i] - 'a']++;
		}
		
		for (int i = 0; i < word.size(); i++)
		{
			if(word[i] >= 'a' && word[i] <= 'z')
				if (!alpa[word[i] - 'a'] || !alpa['z' - word[i]])
				{
					ck = false;
					break;
				}
		}

		if (ck)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}

