#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
	string word;

	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] - 3 < 'A')
			word[i] = (word[i] - 3) + 26;
		else
			word[i] = word[i] - 3;
	}

		cout << word;
}
