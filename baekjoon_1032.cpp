#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int N;
string pattern;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		string tmp;
		if (i == 0)
		{
			cin >> tmp;
			pattern = tmp;
		}
		else
		{
			cin >> tmp;
			for (int j = 0; j < tmp.size(); j++)
			{
				if (pattern[j] != '?')
				{
					if (pattern[j] != tmp[j])
						pattern[j] = '?';
				}
			}
		}
	}

	cout << pattern << endl;
}
