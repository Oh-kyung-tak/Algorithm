#include <iostream>
#include <map>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int p, w;
string word;
int sum = 0;
int cnt = -1;

int main()
{
	cin >> p >> w;
	getchar();
	getline(cin, word);
	int size = word.size();

	for (int i = 0; i < size; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'C')
		{
			if (cnt == 2)
				sum += w;
			sum += (word[i] - 'A' + 1) * p;

			cnt = 2;
		}
		else if (word[i] >= 'D' && word[i] <= 'F')
		{
			if (cnt == 3)
				sum += w;
			sum += (word[i] - 'D' + 1) * p;

			cnt = 3;
		}
		else if (word[i] >= 'G' && word[i] <= 'I')
		{
			if (cnt == 4)
				sum += w;
			sum += (word[i] - 'G' + 1) * p;

			cnt = 4;
		}
		else if (word[i] >= 'J' && word[i] <= 'L')
		{
			if (cnt == 5)
				sum += w;
			sum += (word[i] - 'J' + 1) * p;

			cnt = 5;
		}
		else if (word[i] >= 'M' && word[i] <= 'O')
		{
			if (cnt == 6)
				sum += w;
			sum += (word[i] - 'M' + 1) * p;

			cnt = 6;
		}
		else if (word[i] >= 'P' && word[i] <= 'S')
		{
			if (cnt == 7)
				sum += w;
			sum += (word[i] - 'P' + 1) * p;

			cnt = 7;
		}
		else if (word[i] >= 'T' && word[i] <= 'V')
		{
			if (cnt == 8)
				sum += w;
			sum += (word[i] - 'T' + 1) * p;

			cnt = 8;
		}
		else if (word[i] >= 'W' && word[i] <= 'Z')
		{
			if (cnt == 9)
				sum += w;
			sum += (word[i] - 'W' + 1) * p;

			cnt = 9;
		}
		else
		{
			sum += p;
			cnt = 1;
		}
			
	}

	cout << sum << endl;

}
