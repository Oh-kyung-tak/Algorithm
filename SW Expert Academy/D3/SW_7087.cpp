#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
bool alpa[27];

int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		memset(alpa, false, sizeof(alpa));
		int num;
		int cnt = 0;
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			string word;
			cin >> word;
			alpa[word[0] - 'A'] = true;
		}

		for (int i = 0; i < 27; i++)
		{
			if (alpa[i] == false)
				break;
			else
				cnt++;
		}
		cout << "#" << Test_case << " " << cnt << endl;
	}
}