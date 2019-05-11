#include<iostream>
#include<set>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>

using namespace std;
int T;
int c1 = 0, c2 = 0, c3 = 0;

int main()
{
	cin >> T;

	if (T >= 300)
	{
		c1 = T / 300;
		T -= c1 * 300;
	}
	
	if (T >= 60)
	{
		c2 = T / 60;
		T -= c2 * 60;
	}

	if (T >= 10)
	{
		c3 = T / 10;
		T -= c3 * 10;
	}

	if (T == 0)
	{
		cout << c1 << " " << c2 << " " << c3 << endl;
	}
	else
		cout << "-1" << endl;
}
