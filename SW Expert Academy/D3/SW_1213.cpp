#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;
char word[101][101];


int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (test_case = 0; test_case < 10; test_case++)
	{
		int N;
		string word;
		string sentense;
		int cnt = 0;

		cin >> N;
		cin >> word;
		cin >> sentense;

		for (int i = 0; i <= sentense.size() - word.size(); i++)
		{
			string temp = sentense.substr(i, word.size());

			if (word == temp)
				cnt++;
		}

		
		cout << "#" << test_case + 1 << " " << cnt << endl;
	}

	return 0;
}