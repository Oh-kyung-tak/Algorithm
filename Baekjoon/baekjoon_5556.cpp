#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int n, k;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < k; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << (min({ a,n - a + 1,b,n - b + 1 }) - 1) % 3 + 1 << endl;
	}

}