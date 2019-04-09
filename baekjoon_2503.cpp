#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool number[1000];
string tmp;
int tmp_str = 0, tmp_ball = 0;
int N;
int cnt = 0;

int main()
{
	memset(number, true, sizeof(number));

	for (int i = 123; i <= 987; i++)
	{
		tmp = to_string(i);
		if (tmp[0] == tmp[1] || tmp[1] == tmp[2] || tmp[0] == tmp[2])
			number[i] = false;
		if (tmp[0] - '0' == 0 || tmp[1] - '0' == 0 || tmp[2] - '0' == 0)
			number[i] = false;
	}

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int num, st_cnt, ball_cnt;

		cin >> num >> st_cnt >> ball_cnt;

		for (int j = 123; j <= 987; j++)
		{
			if (number[j])
			{
				tmp_str = 0, tmp_ball = 0;
				string first_number = to_string(j);
				string second_number = to_string(num);
				
				for (int x = 0; x < 3; x++)
				{
					for (int y = 0; y < 3; y++)
					{
						if (x == y && first_number[x] == second_number[y])
							tmp_str++;
						
						if (x != y && first_number[x] == second_number[y])
							tmp_ball++;
					}
				}
				if (tmp_str != st_cnt || tmp_ball != ball_cnt)
					number[j] = false;
			}
		}
		
	}

	for (int i = 123; i <= 987; i++)
		if (number[i] == true)
			cnt++;

	cout << cnt << endl;
}
