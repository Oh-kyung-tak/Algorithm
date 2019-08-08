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
int N, M;

int main()
{
	cin >> N >> M;
	getchar();
	getline(cin, word);

	for (int i = 0; i < M; i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			int num = word[i] - 'a' + (N % 26);

			if (num >= 26)
				num -= 26;

			num += 'a';

			char c = num;
			cout << c;
		}
		else if (word[i] >= 'A' && word[i] <= 'Z')
		{
			int num = word[i] - 'A' + (N % 26);

			if (num >= 26)
				num -= 26;

			num += 'A';
			char c = num;
			cout << c;
		}
		else
			cout << word[i];
	}
}

