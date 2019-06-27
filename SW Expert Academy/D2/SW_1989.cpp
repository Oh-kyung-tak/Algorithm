#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		string word;
		string r_word;

		int ck = 0;
		cin >> word;
		
		for (int i = word.size() - 1; i >= 0; i--)
			r_word += word[i];

		if (word == r_word)
			ck = 1;

		cout << "#" << k << " " << ck << endl;
	}
}