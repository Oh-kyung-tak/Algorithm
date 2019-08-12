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

int main()
{
	while (1)
	{
		vector<char> v;
		bool ck = true;

		cin >> word;

		if (word == "#")
			break;
		
		for (int i = word.size() - 1; i >= 0; i--)
		{
			if (word[i] == 'b')
				v.push_back('d');
			else if (word[i] == 'd')
				v.push_back('b');
			else if (word[i] == 'p')
				v.push_back('q');
			else if (word[i] == 'q')
				v.push_back('p');
			else if (word[i] == 'i' || word[i] == 'o' || word[i] == 'v' || word[i] == 'w' || word[i] == 'x')
				v.push_back(word[i]);
			else
			{
				ck = false;
				break;
			}
		}

		if (ck)
		{
			for (int i = 0; i < v.size(); i++)
				cout << v[i];
			cout << endl;
		}
		else
			cout << "INVALID" << endl;
	}

}

