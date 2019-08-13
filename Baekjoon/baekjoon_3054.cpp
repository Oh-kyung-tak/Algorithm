#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

string word;
char ww[6][101];
int center = 3;

int main()
{
	cin >> word;

	memset(ww, '.', sizeof(ww));
	for (int i = 0; i < word.size(); i++)
	{
		ww[1][center] = '#';
		ww[2][center - 1] = '#';
		ww[2][center + 1] = '#';
		ww[3][center - 2] = '#';
		ww[3][center] = word[i];
		ww[3][center + 2] = '#';
		ww[4][center - 1] = '#';
		ww[4][center + 1] = '#';
		ww[5][center] = '#';

		center += 4;
	}

	center = 3;

	for (int i = 0; i < word.size(); i++)
	{
		if (i % 3 == 2)
		{
			ww[1][center] = '*';
			ww[2][center - 1] = '*';
			ww[2][center + 1] = '*';
			ww[3][center - 2] = '*';
			ww[3][center] = word[i];
			ww[3][center + 2] = '*';
			ww[4][center - 1] = '*';
			ww[4][center + 1] = '*';
			ww[5][center] = '*';
		}
		center += 4;
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= center - 2; j++)
			cout << ww[i][j];

		cout << endl;
	}
}