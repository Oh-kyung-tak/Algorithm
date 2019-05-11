#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;
int T;

int main()
{
	int N = 2;
	int start = 1;
	int ss = 1;

	cin >> T;

	while ((start - 1) != T)
	{
		N += ss;
		ss *= 2;
		start++;
	}

	cout << N * N << endl;
}
