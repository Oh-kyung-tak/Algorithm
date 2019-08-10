#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;
int N;
string word;

int main()
{
	cin >> N;

	while (N--)
	{
		cin >> word;

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] >= 'A' && word[i] <= 'Z')
				word[i] += 32;

			cout << word[i];
		}
		cout << endl;

	}
}

