#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;
int N;

int main()
{
	int x, y;
	cin >> x >> y;
	
	if (x > 2)
		cout << "After" << endl;
	else if (x < 2)
		cout << "Before" << endl;
	else if (x == 2)
	{
		if (y > 18)
			cout << "After" << endl;
		else if (y < 18)
			cout << "Before" << endl;
		else if (y == 18)
			cout << "Special" << endl;
	}

}

