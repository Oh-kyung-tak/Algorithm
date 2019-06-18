#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#define MAX 1001

using namespace std;

int number = 1;

int main()
{
	while (1)
	{
		vector<string> v;
		int num;
		int ck[101];

		memset(ck, 0, sizeof(ck));
		cin >> num;

		if (num == 0)
			return 0;

		getchar();
		for (int i = 0; i < num; i++)
		{
			string str;
			getline(cin, str);
			v.push_back(str);

		}

		for (int i = 0; i < 2 * num - 1; i++)
		{
			int t;
			char c;
			cin >> t >> c;
			ck[t - 1]++;
		}

		for (int i = 0; i < num; i++)
		{
			if (ck[i] == 1)
			{
				cout << number << " " << v[i] << endl;
				break;
			}
		}

		number++;
	}
}