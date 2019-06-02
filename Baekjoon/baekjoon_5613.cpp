#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

int A, B;
string op;

int main()
{
	cin >> A;
	while (1)
	{
		cin >> op;

		if (op != "=")
		{
			cin >> B;
			
			if (op == "+")
				A += B;
			else if (op == "-")
				A -= B;
			else if (op == "*")
				A *= B;
			else
				A /= B;
		}
		else
			break;
	}
	
	cout << A << endl;
}