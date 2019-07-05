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
		memset(num, 0, sizeof(num));

		int a, b, c;
		int cnt;
		cin >> a >> b >> c;
		num[a]++;
		num[b]++;
		num[c]++;

		if (num[a] % 2 == 1)
			cnt = a;
		if (num[b] % 2 == 1)
			cnt = b;
		if (num[c] % 2 == 1)
			cnt = c;

		cout << "#" << Test_case << " " << cnt << endl;
		
		
	}
}