#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int N;
int alpa[26];

int main()
{
	cin >> N;

	while (N--)
	{
		memset(alpa, 0, sizeof(alpa));
		string s1, s2;
		bool ck = true;

		cin >> s1 >> s2;

		for (int i = 0; i < s1.size(); i++)
			alpa[s1[i] - 'a']++;

		if (s1.size() != s2.size())
			ck = false;
		else
		{
			for (int i = 0; i < s2.size(); i++)
			{
				if (alpa[s2[i] - 'a'] == 0)
					ck = false;
				else
					alpa[s2[i] - 'a']--;
			}
		}
		
		if (ck)
			cout << s1 << " & " << s2 << " are anagrams." << endl;
		else
			cout << s1 << " & " << s2 << " are NOT anagrams." << endl;
	}

}