#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int k_x, k_y;
int r_x, r_y;
string k, r;
int N;
char alpa[10] = { '0','A','B','C','D','E','F','G','H' };
int main()
{
	cin >> k >> r >> N;

	k_x = (k[0] - 'A') + 1;
	k_y = (k[1] - '0');
	r_x = (r[0] - 'A') + 1;
	r_y = (r[1] - '0');

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;

		int tk_x = k_x;
		int tk_y = k_y;
		int tr_x = r_x;
		int tr_y = r_y;

		for (int j = 0; j < temp.size(); j++)
		{
			if (temp[j] == 'R')
			{
				tk_x++;
				tr_x++;
			}
			if (temp[j] == 'L')
			{
				tk_x--;
				tr_x--;
			}
			if (temp[j] == 'B')
			{
				tk_y--;
				tr_y--;
			}
			if (temp[j] == 'T')
			{
				tk_y++;
				tr_y++;
			}
		}

		if (tk_x >= 1 && tk_x <= 8 && tk_y >= 1 && tk_y <= 8)
		{
			if (tk_x == r_x && tk_y == r_y)
			{
				if (tr_x >= 1 && tr_x <= 8 && tr_y >= 1 && tr_y <= 8)
				{
					k_x = tk_x;
					k_y = tk_y;
					r_x = tr_x;
					r_y = tr_y;
				}
			}
			else
			{
				k_x = tk_x;
				k_y = tk_y;
			}
		}
	}

	cout << alpa[k_x] << k_y << endl;
	cout << alpa[r_x] << r_y << endl;
}