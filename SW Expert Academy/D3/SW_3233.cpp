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

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		long long int a, b;
		long long int sum;

		cin >> a >> b;

		sum = (a / b) * (a / b);
		cout << "#" << Test_case << " " << sum << endl;
	}
}