#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <queue>

using namespace std;

int N;
int alpa[27] = { 1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0 };
int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		bool ck = true;
		string a_word, b_word;
		string www;
		cin >> a_word >> b_word;

		if (a_word.size() != b_word.size())
			ck = false;
		else
		{
			for (int i = 0; i < a_word.size(); i++)
			{
				if (alpa[a_word[i] - 'A'] != alpa[b_word[i] - 'A'])
				{
					ck = false;
					break;
				}
			}
		}

		if (ck)
			www = "SAME";
		else
			www = "DIFF";

		cout << "#" << Test_case << " " << www << endl;
	}

	return 0;
}