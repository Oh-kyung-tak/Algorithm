#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		int W;
		int sum = 0;
		cin >> W;
		
		for (int i = 0; i < 9; i++)
		{
			int temp;
			cin >> temp;
			sum += temp;
		}
		
		if (W >= sum)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
}