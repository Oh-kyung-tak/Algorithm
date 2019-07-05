#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
long long int N[101];

int main()
{
	cin >> T;

	N[1] = 1;
	N[2] = 1;
	N[3] = 1;

	for (int i = 4; i <= 101; i++)
		N[i] = N[i - 3] + N[i - 2];

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int num;
		cin >> num;

		cout << "#" << Test_case << " " << N[num] << endl;

	}
}