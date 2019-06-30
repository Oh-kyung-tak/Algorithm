#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
int score[101];

int main()
{
	cin >> N;
	
	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		memset(score, 0, sizeof(score));

		int num;
		int max_people = 0;
		int sc;

		cin >> num;

		for (int i = 0; i < 1000; i++)
		{
			int sc;
			cin >> sc;
			score[sc]++;
		}

		for (int i = 100; i >= 0; i--)
		{
			if (score[i] > max_people)
			{
				max_people = score[i];
				sc = i;
			}
		}

		cout << "#" << Test_case << " " << sc << endl;
	}

	return 0;
}