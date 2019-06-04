#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

int a = 1, b = 1;
int N;

int main()
{
	cin >> N;

	while (N)
	{
		if (N % 2 == 0)
			a++;
		else
			b++;

		N--;
	}

	cout << a * b << endl;
}