#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;
int alpa[26];
char al[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int main()
{
	cin >> N;
	getchar();

	while (N--)
	{
		memset(alpa, 0, sizeof(alpa));
		string word;
		bool ck = true;
		vector<char> v;
		getline(cin, word);

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] >= 'a' && word[i] <= 'z')
				alpa[word[i] - 'a']++;

			if (word[i] >= 'A' && word[i] <= 'Z')
				alpa[word[i] - 'A']++;
		}

		for (int i = 0; i < 26; i++)
		{
			if (alpa[i] == 0)
				v.push_back(al[i]);
		}

		if (v.size() == 0)
			cout << "pangram" << endl;
		else
		{
			cout << "missing ";
			for (int i = 0; i < v.size(); i++)
				cout << v[i];
			cout << endl;
		}
	}
}

