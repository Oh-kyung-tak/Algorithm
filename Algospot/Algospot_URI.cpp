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
		
		int size = word.size();

		for (int i = 0; i < size; i++)
		{
			if (word[i] == '%')
			{
				string temp = word.substr(i, 3);
				if (temp == "%20")
					cout << " ";
				else if (temp == "%21")
					cout << "!";
				else if (temp == "%24")
					cout << "$";
				else if (temp == "%25")
					cout << "%";
				else if (temp == "%28")
					cout << "(";
				else if (temp == "%29")
					cout << ")";
				else if (temp == "%2a")
					cout << "*";

				i += 2;
			}
			else
				cout << word[i];
		}
		
		cout << endl;
	}
}