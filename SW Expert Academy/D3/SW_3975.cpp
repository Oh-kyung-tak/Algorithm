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
		double alice, bob;
		double a, b, c, d;

		cin >> a >> b >> c >> d;

		alice = a / b;
		bob = c / d;

		cout << "#" << Test_case << " ";
		if (alice < bob)
			cout << "BOB";
		else if (alice > bob)
			cout << "ALICE";
		else
			cout << "DRAW";
		cout << "\n";
	}
}