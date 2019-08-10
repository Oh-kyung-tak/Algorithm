#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;
int sum = 0;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		sum += temp;
	}

	cout << sum << endl;
}

