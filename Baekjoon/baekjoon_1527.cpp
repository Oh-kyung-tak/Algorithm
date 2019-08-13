#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

long long int cnt = 0;
long long int N, M;

void check(long long int temp)
{
	if (M < temp)
		return;

	if (N <= temp && M >= temp)
		cnt++;

	check(temp * 10 + 4);
	check(temp * 10 + 7);
}
int main()
{
	cin >> N >> M;

	check(4);
	check(7);

	cout << cnt << endl;
}

