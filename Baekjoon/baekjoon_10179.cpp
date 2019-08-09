#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;


int main()
{
	cin >> N;

	while (N--)
	{
		double price;

		cin >> price;

		cout << fixed;
		cout.precision(2);
		cout << "$" << price * 0.8 << endl;
	}
}

