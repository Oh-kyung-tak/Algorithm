#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;
string word;

int main()
{
	while (1)
	{
		bool ck = false;
		getline(cin, word);
		
		if (word == "EOI")
			break;

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] >= 'A' && word[i] <= 'Z')
				word[i] += 32;
		}

		for (int i = 0; i < word.size(); i++)
		{
			if (word.substr(i, 4) == "nemo")
			{
				ck = true;
				break;
			}
		}

		if (ck)
			cout << "Found" << endl;
		else
			cout << "Missing" << endl;
	}
	
}

