#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int a, b;
int main()
{
	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			return 0;

		if (b % a == 0)
			cout << "factor" << endl;
		else if (a % b == 0)
			cout << "multiple" << endl;
		else
			cout << "neither" << endl;
	}

}