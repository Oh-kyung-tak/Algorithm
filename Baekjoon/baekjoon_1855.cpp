#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N;
string word;
string cryp_word;

bool ck = false;

int main()
{	
	cin >> N;
	cin >> word;

	for (int i = 0; i < word.size(); i += N)
	{
		string tmp = word.substr(i, N);
		
		if (ck)
		{
			reverse(tmp.begin(), tmp.end());
			cryp_word += tmp;
			ck = false;
		}
		else
		{
			cryp_word += tmp;
			ck = true;
		}
	}

	cout << cryp_word << endl;

	for (int i = 0; i < N; i++)
	{
		int tmp = i;
		for (int j = 0; j < word.size() / N; j++)
		{
			cout << cryp_word[tmp];
			tmp += N;
		}
	}
	
	
}