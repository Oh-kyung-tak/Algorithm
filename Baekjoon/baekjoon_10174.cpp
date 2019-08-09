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


int main()
{
	cin >> N;
	getchar();
	while (N--)
	{
		string word;
		string r_word;
		getline(cin, word);
		
		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] >= 'a' && word[i] <= 'z')
				word[i] -= 32;
		}

		r_word = word;
		std::reverse(r_word.begin(), r_word.end());

		if (word == r_word)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}

