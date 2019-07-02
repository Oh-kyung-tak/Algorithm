#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
char word[5][15];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int max_cnt = 0;
		memset(word, '.', sizeof(word));

		for (int i = 0; i < 5; i++)
		{
			string temp;
			cin >> temp;
			for (int j = 0; j < temp.size(); j++)
				word[i][j] = temp[j];

			int size = temp.size();
			max_cnt = max(max_cnt, size);
		}
		cout << '#' << Test_case << " ";
		for (int i = 0; i < max_cnt; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (word[j][i] != '.')
					cout << word[j][i];
			}
		}
		cout << endl;
	}
}