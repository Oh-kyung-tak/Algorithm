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
int N;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		double a, b;
		cin >> a >> b;
		
		a = ceil(pow(a, 1.0 / 3.0));
		b = floor(pow(b, 1.0 / 3.0));

		cout << "Case #" << i << ": " << b - a + 1 << endl;
	}
}