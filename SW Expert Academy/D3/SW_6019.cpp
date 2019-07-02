#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int T;
int bus[5001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		double D, A, B, F;

		cin >> D >> A >> B >> F;

		double load = D / (A + B);
		double dis = load * F;

		cout << fixed;
		cout.precision(6);
		cout << '#' << Test_case << " " << dis << endl;
	}
}