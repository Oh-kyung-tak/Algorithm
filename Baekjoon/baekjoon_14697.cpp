#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int A, B, C, N;

int main() 
{
	cin >> A >> B >> C >> N;
	int t1, t2, t3;

	for (int i = 0; i <= 113; i++)
	{
		t1 = i * A;

		for (int j = 0; j <= 113; j++)
		{
			t2 = j * B;

			for (int k = 0; k <= 113; k++)
			{
				t3 = k * C;

				if (t1 + t2 + t3 == N)
				{
					cout << "1" << endl;
					return 0;
				}
			}
		}
	}
	
	cout << "0" << endl;
	return 0;
}
