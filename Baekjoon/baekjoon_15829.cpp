#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>

using namespace std;
int L;
string word;
long long int sum = 0;
long long M = 1234567891;
long long int cnt = 1;

int main()
{
	cin >> L;
	cin >> word;

	for (int i = 0; i < L; i++)
	{
		sum += ((word[i] - 'a') + 1) * cnt;
		sum %= M;
		cnt *= 31;
		cnt %= M;
	}

	cout << sum << endl;
}