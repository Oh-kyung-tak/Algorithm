#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
int stone[100001];

int main()
{
	cin >> N;
	
	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		memset(stone, 0, sizeof(stone));

		int people;
		int min_dis = 9999999;

		cin >> people;

		for (int i = 0; i < people; i++)
		{
			int temp;
			cin >> temp;
			
			stone[abs(temp)]++;
			min_dis = min(min_dis, abs(temp));
		}

		cout << "#" << Test_case << " " << min_dis << " " << stone[min_dis] << endl;
	}

	return 0;
}