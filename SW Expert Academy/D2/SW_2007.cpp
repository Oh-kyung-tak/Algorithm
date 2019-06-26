#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int k = 1; k <= N; k++)
	{
		string word;
		int cnt = 0;
		cin >> word;

		for (int i = 1; i < word.size(); i++)
		{
			if (word[cnt] == word[i])
				cnt++;
			else
				cnt = 0;
		}

		cout << "#" << k << " " << word.size() - cnt << endl;
	}
}