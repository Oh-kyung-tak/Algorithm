#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int cup[5];
string word;

int main()
{
	cup[1] = 1;
	cup[4] = 2;

	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == 'A')
		{
			int temp = cup[1];
			cup[1] = cup[2];
			cup[2] = temp;
		}
		else if (word[i] == 'B')
		{
			int temp = cup[1];
			cup[1] = cup[3];
			cup[3] = temp;
		}
		else if (word[i] == 'C')
		{
			int temp = cup[1];
			cup[1] = cup[4];
			cup[4] = temp;
		}
		else if (word[i] == 'D')
		{
			int temp = cup[2];
			cup[2] = cup[3];
			cup[3] = temp;
		}
		else if (word[i] == 'E')
		{
			int temp = cup[2];
			cup[2] = cup[4];
			cup[4] = temp;
		}
		else if (word[i] == 'F')
		{
			int temp = cup[3];
			cup[3] = cup[4];
			cup[4] = temp;
		}
	}

	for (int i = 1; i <= 4; i++)
		if (cup[i] == 1)
			cout << i << endl;

	for (int i = 1; i <= 4; i++)
		if (cup[i] == 2)
			cout << i << endl;
}

