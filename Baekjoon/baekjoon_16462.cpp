#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

double N;
double sum = 0;
int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		int ten_cnt = 1;
		int t_sum = 0;

		cin >> temp;

		while (temp)
		{
			if (temp % 10 == 0 || temp % 10 == 6 || temp % 10 == 9)
				t_sum += 9 * ten_cnt;
			else
				t_sum += (temp % 10) * ten_cnt;

			ten_cnt *= 10;
			temp /= 10;
		}

		if (t_sum >= 100)
			sum += 100;
		else
			sum += t_sum;
	}

	cout << floor(sum / N + 0.5) << endl;
}

