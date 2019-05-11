#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int main()
{
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int H, W, N;
		cin >> H >> W >> N;

		int x = N % H;
		int y = N / H;

		if (x == 0)
		{
			x = H;
			cout << x * 100 + y << endl;
		}
		else
			cout << x * 100 + (y + 1) << endl;
	}
}
