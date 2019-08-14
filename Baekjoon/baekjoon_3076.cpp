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

int R, C, A, B;

int main()
{

	cin >> R >> C;
	cin >> A >> B;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < A; j++)
		{
			for (int k = 0; k < C; k++)
			{
				if ((i + k) % 2 == 0)
					for (int kk = 0; kk < B; kk++)
						cout << "X";
				else
					for (int kk = 0; kk < B; kk++)
						cout << ".";
			}
			cout << endl;
		}
	}
		

}

