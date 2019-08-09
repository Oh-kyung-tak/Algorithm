#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;

//다리가 2개 모두 있는 경우 포함!!
int main()
{
	cin >> N;

	while (N--)
	{
		int x, y;
		
		cin >> x >> y;

		for (int i = 0; i <= y; i++)
		{
			int sum = i + (y - i) * 2;
			if (sum == x)
			{
				cout << i << " " << y - i << endl;
				break;
			}				
		}
	}
}

