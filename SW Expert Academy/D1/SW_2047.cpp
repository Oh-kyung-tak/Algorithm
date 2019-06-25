#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
string word;
int sum = 0;

int main()
{
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			word[i] = toupper(word[i]);

		cout << word[i];
	}
}