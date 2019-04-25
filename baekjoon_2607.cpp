#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int N;
string word;

int cnt = 0;
int word_len;
int alpa[27];

int main()
{
	memset(alpa, 0, sizeof(alpa));

	cin >> N;
	cin >> word;

	word_len = word.size();

	for (int i = 0; i < word_len; i++)
		alpa[word[i] - 'A']++;
	
	for (int i = 0; i < N - 1; i++)
	{
		string tempword;
		int temp_len;

		cin >> tempword;
		temp_len = tempword.size();

		if (abs(temp_len - word_len) < 2)
		{
			int temp_alpa[27];
			int temp_cnt = 0;

			memset(temp_alpa, 0, sizeof(temp_alpa));

			for (int j = 0; j < temp_len; j++)
				temp_alpa[tempword[j] - 'A']++;

			for (int j = 0; j < 26; j++)
				temp_cnt += abs(alpa[j] - temp_alpa[j]);

			if (temp_cnt < 3)
				cnt++;
		}
	}

	cout << cnt << endl;
}
