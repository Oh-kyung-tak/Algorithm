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

int num[30];
int cnt_num[30];
int N;

int main()
{
	cin >> N;

	num[0] = 0;
	num[1] = 1;
	cnt_num[0] = 0;
	cnt_num[1] = 1;

	for (int i = 2; i <= 29; i++)
	{
		cnt_num[i] = num[i - 1];
		num[i] = num[i - 1] * 2;

		if (i >= 4 && i % 2 == 0)
			num[i] -= cnt_num[i - 3] + cnt_num[i - 4];
	}

	cout << num[N] << endl;

}