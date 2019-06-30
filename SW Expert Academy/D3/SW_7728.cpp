#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
bool num[10];

int main()
{
	cin >> N;
	
	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		memset(num, 0, sizeof(num));

		string word;
		int cnt = 0;

		cin >> word;
		
		for (int i = 0; i < word.size(); i++)
		{
			if (!num[word[i] - '0'])
			{
				num[word[i] - '0'] = true;
				cnt++;
			}
		}

		cout << "#" << Test_case << " " << cnt << endl;
	}

	return 0;
}