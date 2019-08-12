#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>

using namespace std;

double price[5] = { 350.34, 230.90, 190.55, 125.30, 180.90 };
int N;

int main()
{
	cin >> N;

	while (N--)
	{
		double temp[5];
		double sum = 0;

		for (int i = 0; i < 5; i++)
		{
			cin >> temp[i];
			sum += price[i] * temp[i];
		}
		
		cout << fixed;
		cout.precision(2);
		cout << "$" << sum << endl;
	}

}