#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int aa[101][101];
int bb[101][101];
int a1, a2, b1, b2;

int main()
{
	cin >> a1 >> a2;
	
	for (int i = 1; i <= a1; i++)
		for (int j = 1; j <= a2; j++)
			cin >> aa[i][j];

	cin >> b1 >> b2;

	for (int i = 1; i <= b1; i++)
		for (int j = 1; j <= b2; j++)
			cin >> bb[i][j];

	for (int i = 1; i <= a1; i++)
	{
		for (int j = 1; j <= b2; j++)
		{
			int sum = 0;
			for (int k = 1; k <= a2; k++)
				sum += aa[i][k] * bb[k][j];

			cout << sum << " ";
		}
		cout << endl;
	}
}