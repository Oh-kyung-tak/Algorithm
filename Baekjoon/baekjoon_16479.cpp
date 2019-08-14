#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;
double K, D1, D2;

int main()
{
	cin >> K >> D1 >> D2;

	if (D1 == D2)
		cout << pow(K, 2) << endl;
	else
		cout << pow(K, 2) - pow((D2 - D1) / 2, 2) << endl;
}


