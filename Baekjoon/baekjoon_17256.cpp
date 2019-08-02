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

int a1, a2, a3;
int c1, c2, c3;

int main()
{
	cin >> a1 >> a2 >> a3;
	cin >> c1 >> c2 >> c3;

	cout << c1 - a3 << " " << c2 / a2 << " " << c3 - a1 << endl;
}