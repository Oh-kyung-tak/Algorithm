#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int num[101];
int main()
{
	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int a, b, c;
		int cnt;

		cin >> a >> b >> c;

		if (c < a)
			cnt = a - c;

		if (c >= a && b >= c)
			cnt = 0;

		if (b < c)
			cnt = -1;

		cout << "#" << Test_case << " " << cnt << endl;
		
		
	}
}