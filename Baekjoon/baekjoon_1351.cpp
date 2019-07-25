#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>

using namespace std;

long long int N, P, Q;
map<long long int, long long int> m;

long long int check(long long int N)
{
	if (m.count(N))
		return m[N];
	else
		return m[N] = check(N / P) + check(N / Q);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> P >> Q;

	m[0] = 1;

	cout << check(N) << endl;
}