#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int N;
double good_day = 1, bad_day = 1;
bool mood;
double condition[4];

int main()
{
	cin >> N >> mood;

	for (int i = 0; i < 4; i++)
		cin >> condition[i];

	for (int i = 0; i < N; i++)
	{
		double t_g, t_b;

		t_g = good_day;
		t_b = bad_day;

		if (i == 0)
		{
			if (mood == 0)
			{
				good_day = condition[0];
				bad_day = condition[1];
			}
			else
			{
				good_day = condition[2];
				bad_day = condition[3];
			}
		}
		else
		{
			good_day = t_g * condition[0] + t_b * condition[2];
			bad_day = t_g * condition[1] + t_b * condition[3];
		}
	}
	
	cout << round(good_day * 1000)<< endl;
	cout << round(bad_day * 1000) << endl;
}