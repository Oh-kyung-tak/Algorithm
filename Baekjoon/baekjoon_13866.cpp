#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

vector<int> v;

int main()
{
	for (int i = 0; i < 4; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	cout << abs(v[3] + v[0] - v[1] - v[2]) << endl;
}