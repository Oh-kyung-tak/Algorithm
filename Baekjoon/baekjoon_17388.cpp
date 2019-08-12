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

int s, k, h;
int sum = 0;
int mi = 9999;

int main()
{
	cin >> s >> k >> h;

	sum = s + k + h;
	
	if (sum >= 100)
		cout << "OK" << endl;
	else
	{
		mi = min({ s,k,h });

		if (mi == s)
			cout << "Soongsil";
		else if (mi == k)
			cout << "Korea";
		else
			cout << "Hanyang";
	}
	

}

