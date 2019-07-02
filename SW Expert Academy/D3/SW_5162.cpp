#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int a, b, c;
		int max_n;
		cin >> a >> b >> c;

		max_n = max(c / a, c / b);

		cout << '#' << Test_case << " " << max_n << endl;
	}
}