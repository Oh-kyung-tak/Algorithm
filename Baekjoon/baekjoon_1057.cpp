#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int people;
int a, b;
int cnt = 0;

int main()
{
	cin >> people >> a >> b;

	if (people < a || people < b) 
		cnt = -1;
	else {
		while (a != b)
		{
			a = (a + 1) / 2;
			b = (b + 1) / 2;
			cnt++;
		}
	}

	printf("%d\n", cnt);

}

