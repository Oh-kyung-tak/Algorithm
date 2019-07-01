#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;

int N;
bool card[18];

int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		int block[1001];
		int up = 0;
		int down = 0;
		int num;

		cin >> num;

		for (int i = 1; i <= num; i++)
			cin >> block[i];

		for (int i = 1; i < num; i++)
		{
			if (block[i] < block[i + 1])
				up = max(up, block[i + 1] - block[i]);
			else
				down = max(down, block[i] - block[i + 1]);
		}
		
		cout << "#" << Test_case << " " << up << " " << down << endl;
	}
}