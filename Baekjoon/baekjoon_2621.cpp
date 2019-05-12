#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int number[10];
char lastcolor = 'a';
int color_cnt = 1;
int max_cnt = 0;
int first_index = 0;
int second_cnt = -1;
int second_index = 0;
int score = -1;

int main()
{
	memset(number, 0, sizeof(number));
	for (int i = 0; i < 5; i++)
	{
		char c;
		int n;

		cin >> c >> n;

		if (lastcolor == c)
			color_cnt++;
		else
			color_cnt = 1;

		lastcolor = c;
		number[n]++;
	}

	for (int i = 9; i >= 1; i--)
	{
		if (max_cnt < number[i])
		{
			max_cnt = number[i];
			first_index = i;
		}
	}

	for (int i = 1; i <= 9; i++)
	{
		if (second_cnt < number[i] && first_index != i)
		{
			second_cnt = number[i];
			second_index = i;
		}
	}

	if (color_cnt == 5)
	{
		// 1번 규칙 & 4번 규칙
		if (max_cnt == 1 && first_index - second_index == 4)
			score = max(score, 900 + first_index);
		else
			score = max(score, 600 + first_index);
	}
	else
	{
		// 5번 규칙
		if (max_cnt == 1 && first_index - second_index == 4)
			score = max(score, 500 + first_index);

		// 2번 규칙
		if (max_cnt == 4)
			score = max(score, 800 + first_index);

		// 3번 규칙 & 6번 규칙
		if (max_cnt == 3)
		{
			if (second_cnt == 2)
				score = max(score, first_index * 10 + second_index + 700);
			else
				score = max(score, 400 + first_index);
		}

		if (max_cnt == 2)
		{
			if (second_cnt == 2)
				score = max(score, first_index * 10 + second_index + 300);
			else
				score = max(score, 200 + first_index);
		}

		if (max_cnt == 1)
			score = max(score, 100 + first_index);
	}

	cout << score << endl;
}

