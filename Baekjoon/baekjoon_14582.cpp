#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int u_sum = 0, s_sum = 0;

int u_score[10];
int s_score[10];
int main()
{
	bool ck = false;

	for (int i = 1; i <= 9; i++)
		cin >> u_score[i];

	for (int i = 1; i <= 9; i++)
		cin >> s_score[i];

	for (int i = 1; i <= 9; i++)
	{
		u_sum += u_score[i];
		if (u_sum > s_sum)
			ck = true;
		s_sum += s_score[i];

	
	}

	if (u_sum < s_sum)
	{
		if (ck == true)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else
		cout << "No" << endl;
}
