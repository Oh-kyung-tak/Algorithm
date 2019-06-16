#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;
string word;

int main()
{
	cin >> word;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
				cout << ':' << word << ':';
			else
				cout << ":fan:";
		}
		cout << endl;
	}

}