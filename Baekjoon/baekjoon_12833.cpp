#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

long long int A, B, C;
long long int ans;

int main()
{
	cin >> A >> B >> C;

	ans = A ^ B;
	for (int i = 1; i < C; i++)
		ans = ans ^ B;
	
	cout << ans << endl;

}

