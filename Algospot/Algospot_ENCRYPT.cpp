#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		string word;
		cin >> word;

		for (int i = 0; i < word.size(); i += 2)
			cout << word[i];

		for (int i = 1; i < word.size(); i += 2)
			cout << word[i];

		cout << endl;
	}
}