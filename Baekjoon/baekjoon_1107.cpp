#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int error[11];
int current = 100;
int N, M;
int temp_num;
int front_count = 99999999, back_count = 999999999;
int len = 0;
int min_num;

int main()
{
	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;
		error[temp] = 1;
	}

	temp_num = N;

	while (temp_num <= 1000000)
	{
		int tem = temp_num;
		bool check = true;

		len = 0;

		while (tem)
		{
			int xx = tem % 10;
			if (error[xx] == 1)
			{
				check = false;
				break;
			}
			tem /= 10;
			len++;
		}

		if (temp_num == 0)
		{
			if (error[0] == 1)
				check = false;
			else
				len = 1;
		}

		if (check)
		{
			front_count = len + abs(temp_num - N);
			break;
		}
		temp_num++;
	}

	temp_num = N;

	while (temp_num >= 0)
	{
		int tem = temp_num;
		bool check = true;

		len = 0;

		while (tem)
		{
			int xx = tem % 10;
			if (error[xx] == 1)
			{
				check = false;
				break;
			}
			tem /= 10;
			len++;
		}

		if (temp_num == 0)
		{
			if (error[0] == 1)
				check = false;
			else
				len = 1;
		}

		if (check)
		{
			back_count = len + abs(temp_num - N);
			break;
		}

		temp_num--;
	}

	min_num = min(min(front_count, back_count), abs(N - current));

	cout << min_num;
}

