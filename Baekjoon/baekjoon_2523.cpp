#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>
#include <ctime>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";

		cout << endl;
	}
	for (int i = N - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";

		cout << endl;
	}
}

