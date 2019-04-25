#include<iostream>
#include<set>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int seat[2001][2001];
int cnt = 0;
int a, b;

int gcd(int a, int b)
{
	int n;

	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return a;

}
int main()
{
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int gcd_num = gcd(i, j);
			if (!seat[j / gcd_num][i / gcd_num])
			{
				seat[j / gcd_num][i / gcd_num] = 1;
				cnt++;
			}
		}
	}

	cout << cnt << endl;
}
