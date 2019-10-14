#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>
#include <string>
#include <map>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		int a, b;
		cin >> a >> b;

		for (int i = 0; i < b; i++)
		{
			int x, y;
			cin >> x >> y;
		}
		
		cout << a - 1 << endl;
	}
}