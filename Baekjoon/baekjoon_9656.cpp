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

	if (N % 2 == 0)
		cout << "SK";
	else
		cout << "CY";
}

