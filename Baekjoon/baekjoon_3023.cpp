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

string part[50];
string card[101];

int R, C;
int A, B;

int main()
{
	cin >> R >> C;

	for (int i = 0; i < R; i++)
		cin >> part[i];

	cin >> A >> B;

	for (int i = 0; i < R; i++)
	{
		string t = part[i];
		reverse(t.begin(), t.end());
		card[i] = part[i] + t;
	}

	for (int i = 0; i < R; i++)
		card[R * 2 - 1 - i] = card[i];

	if (card[A - 1][B - 1] == '#')
		card[A - 1][B - 1] = '.';
	else
		card[A - 1][B - 1] = '#';

	for (int i = 0; i < R * 2; i++)
		cout << card[i] << endl;
}

