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
string word;
map<string, int> m;
int cnt = 0;
int main()
{
	while (cin >> word)
	{
		m[word]++;
		cnt++;
	}

	printf("Re %d %0.2f\n", m["Re"], (float)m["Re"] / cnt);
	printf("Pt %d %0.2f\n", m["Pt"], (float)m["Pt"] / cnt);
	printf("Cc %d %0.2f\n", m["Cc"], (float)m["Cc"] / cnt);
	printf("Ea %d %0.2f\n", m["Ea"], (float)m["Ea"] / cnt);
	printf("Tb %d %0.2f\n", m["Tb"], (float)m["Tb"] / cnt);
	printf("Cm %d %0.2f\n", m["Cm"], (float)m["Cm"] / cnt);
	printf("Ex %d %0.2f\n", m["Ex"], (float)m["Ex"] / cnt);
	printf("Total %d 1.00", cnt);
} 