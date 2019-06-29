#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int money[8] = { 50000,10000,5000,1000,500,100,50,10 };
int cnt[8];

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		int cnt_money;
		cin >> cnt_money;

		for (int i = 0; i < 8; i++)
		{
			cnt[i] = cnt_money / money[i];
			cnt_money -= money[i] * cnt[i];
		}

		cout << "#" << k << endl;
		for (int i = 0; i < 8; i++)
			cout << cnt[i] << " ";
		cout << endl;

	}
}