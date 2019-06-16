#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int M;
		char word;
		cin >> M >> word;

		if (word == 'C')
		{
			vector<int> v;
			for (int i = 0; i < M; i++)
			{
				char temp;
				cin >> temp;
				v.push_back(temp - 64);
			}

			for (int i = 0; i < M; i++)
				cout << v[i] << " ";

			cout << endl;
		}
		else
		{
			vector<char> v;
			for (int i = 0; i < M; i++)
			{
				int temp;
				cin >> temp;
				v.push_back(char(temp + 64));
			}

			for (int i = 0; i < M; i++)
				cout << v[i] << " ";

			cout << endl;
		}
	}
}