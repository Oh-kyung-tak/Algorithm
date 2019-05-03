#include <iostream>
#include <map>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int T;

int main()
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string word;
		int alpa[26];
		int size;
		bool check = true;

		cin >> word;

		memset(alpa, 0, sizeof(alpa));
		size = word.size();

		for (int j = 0; j < size; j++)
		{
			alpa[word[j] - 'A']++;

			if (alpa[word[j] - 'A'] > 0 && alpa[word[j] - 'A'] == 3)
			{
				if (word[j] != word[j + 1] || j == size - 1)
				{
					check = false;
					break;
				}
				else
					alpa[word[j] - 'A'] = 0;
				j++;
			}
		}

		if (check)
			cout << "OK" << endl;
		else
			cout << "FAKE" << endl;
	}
}
