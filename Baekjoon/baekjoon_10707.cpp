#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int a, b, c, d, e;
int xsum, ysum;
int total;

int main(void)
{
	cin >> a >> b >> c >> d >> e;

	xsum = a * e;
	ysum = b;
	if (e > c)
		ysum += (e - c) * d;

	total = min(xsum,ysum);

	cout << total;
}
