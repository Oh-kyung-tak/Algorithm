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
	long long int A, B;

	cin >> A >> B;

	if (A > B)
	{
		long long int temp = B;
		B = A;
		A = temp;
	}

	if (B - A <= 1)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << B - A - 1 << endl;
		for (long long int i = A + 1; i <= B - 1; i++)
			cout << i << " ";
		cout << endl;
	}
}

