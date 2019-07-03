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
		vector<char> v;
		string word;

		cin >> word;

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
				continue;

			v.push_back(word[i]);
		}

		cout << "#" << Test_case << " ";
		for (int i = 0; i < v.size(); i++)
			cout << v[i];
		cout << endl;

	}
}