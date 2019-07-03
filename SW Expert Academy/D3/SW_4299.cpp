#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int day[5001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int d, h, m;
		cin >> d >> h >> m;
		int sum = (d - 1) * 1440 + (h * 60) + m;
		sum -= 15071;

		if (sum < 0)
			sum = -1;
		
		cout << "#" << Test_case << " " << sum << endl;

	}
}