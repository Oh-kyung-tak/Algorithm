#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>

using namespace std;
vector<int> v;
int number[10000];
int cnt = 0;

void check(int a, int b, int c, int d)
{
	number[a * 1000 + b * 100 + c * 10 + d] = cnt;
	number[b * 1000 + c * 100 + d * 10 + a] = cnt;
	number[c * 1000 + d * 100 + a * 10 + b] = cnt;
	number[d * 1000 + a * 100 + b * 10 + c] = cnt;
}

int main()
{
	string s;

	for (int i = 0; i < 4; i++)
	{
		int c;
		cin >> c;
		v.push_back(c);
	}

	int min_num = v[0] * 1000 + v[1] * 100 + v[2] * 10 + v[3];

	for (int i = 1111; i <= min_num; i++)
	{
		int temp = i;
		int a = temp / 1000;
		temp %= 1000;
		int b = temp / 100;
		temp %= 100;
		int c = temp / 10;
		temp %= 10;
		int d = temp;

		if (a == 0 || b == 0 || c == 0 || d == 0)
			continue;
		else
		{
			if (number[i] == 0)
			{
				check(a, b, c, d);
				cnt++;
			}
		}
	}

	cout << number[min_num] + 1 << endl;
}
