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

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		int M;
		string word;
		
		cin >> M >> word;

		cout << Test_case << " ";

		for (int i = 0; i < word.size(); i++)
		{
			if (i + 1 != M)
				cout << word[i];
		}

		cout << endl;
	}
		
	
}