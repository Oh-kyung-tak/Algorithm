#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
bool card[5][14];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(card, 0, sizeof(card));

		int S = 13, D = 13, H = 13, C = 13;
		bool ck = true;
		int start = 0;
		string word;

		cin >> word;

		for (int i = 0; i < word.size(); i += 3)
		{
			char c = word[i];
			int num = (word[i + 1] - '0') * 10 + word[i + 2] - '0';

			if (c == 'S')
			{
				if (card[1][num])
				{
					ck = false;
					break;
				}
				else
				{
					card[1][num] = true;
					S--;
				}
			}
			else if (c == 'D')
			{
				if (card[2][num])
				{
					ck = false;
					break;
				}
				else
				{
					card[2][num] = true;
					D--;
				}
			}
			else if (c == 'H')
			{
				if (card[3][num])
				{
					ck = false;
					break;
				}
				else
				{
					card[3][num] = true;
					H--;
				}
			}
			else
			{
				if (card[4][num])
				{
					ck = false;
					break;
				}
				else
				{
					card[4][num] = true;
					C--;
				}
			}
		}

		cout << "#" << Test_case << " ";
		if (ck == false)
			cout << "ERROR";
		else
			cout << S << " " << D << " " << H << " " << C;
		cout << endl;

	}
}