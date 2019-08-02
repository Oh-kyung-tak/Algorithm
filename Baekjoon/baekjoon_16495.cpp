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

long long int cnt = 1;
long long int sum = 0;
string word;

int main()
{
	cin >> word;

	for (int i = word.size() - 1; i >= 0; i--)
	{
		sum += ((word[i] - 'A') + 1) * cnt;
		cnt *= 26;
	}

	cout << sum << endl;

}