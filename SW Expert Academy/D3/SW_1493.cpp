#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int T, test_case;

int num[1001];

int check_num(int n)
{
	int tt = 1;

	while (1)
	{
		if (num[tt] <= n && num[tt + 1] > n)
			return tt;

		tt++;
	}
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	
	int cnt = 1;
	num[1] = 1;

	for (int i = 2; i <= 1001; i++)
	{
		num[i] = num[i - 1] + cnt;
		cnt++;
	}

	for (test_case = 0; test_case < T; test_case++)
	{
		int a, b;
		int a_temp, b_temp;
		int x = 0, y = 0;
		int answer;

		cin >> a >> b;
		
		a_temp = check_num(a);
		b_temp = check_num(b);
		
		x += a_temp - (a - num[a_temp]);
		y += (a - num[a_temp]) + 1;
		x += b_temp - (b - num[b_temp]);
		y += (b - num[b_temp]) + 1;

		answer = num[x + (y - 1)] + (y - 1);
		cout << "#" << test_case + 1 << " " << answer << endl;
		
	}

	return 0;
}