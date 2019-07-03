#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		string word;
		string r_word;
		bool ck = true;

		cin >> word;
		r_word = word;
		std::reverse(r_word.begin(), r_word.end());
	
		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] == '?' || r_word[i] == '?')
				continue;

			if (word[i] != r_word[i])
			{
				ck = false;
				break;
			}
		}
		cout << "#" << Test_case << " ";
		if (ck == true)
			cout << "Exist";
		else
			cout << "Not exist";
		cout << endl;

	}
}