#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;
int N;
int max_money = -1;

int main()
{
	cin >> N;

	while (N--)
	{
		int dice[7];
		int second_index = -1;
		int max_num = -1;
		int first_index;
		int sum = 0;
		memset(dice, 0, sizeof(dice));

		for (int i = 0; i < 4; i++)
		{
			int temp;
			cin >> temp;
			dice[temp]++;
		}

		for (int i = 6; i >= 1; i--)
		{
			if (max_num < dice[i])
			{
				max_num = dice[i];
				first_index = i;
			}
		}

		if (max_num == 4)
			sum += 50000 + (first_index * 5000);
		else if (max_num == 3)
			sum += 10000 + (first_index * 1000);
		else if (max_num == 2)
		{
			for (int i = first_index - 1; i >= 1; i--)
			{
				if (dice[i] == max_num)
					second_index = i;
			}

			if (second_index > 0)
				sum += 2000 + (first_index * 500) + (second_index * 500);
			else
				sum += 1000 + (first_index * 100);
		}
		else
			sum += first_index * 100;

		if (max_money < sum)
			max_money = sum;
	}

	cout << max_money << endl;
}

