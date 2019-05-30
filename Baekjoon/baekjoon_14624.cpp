#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int N;
int center;
int space = 1;
int main()
{
	cin >> N;

	if (N % 2 == 0)
		cout << "I LOVE CBNU" << endl;
	else
	{
		for (int i = 1; i <= N; i++)
			cout << "*";

		cout << endl;

		N--;
		center = N / 2;
		N = N / 2 + 1;
		for (int i = 1; i <= N; i++)
		{
			if (i == 1)
			{
				for (int j = center; j > 0; j--)
					cout << " ";

				cout << "*" << endl;
				center--;
			}
			else
			{
				for (int j = center; j > 0; j--)
					cout << " ";

				cout << "*";

				for (int j = 1; j <= space; j++)
					cout << " ";

				cout << "*" << endl;
				center--;
				space += 2;
			}
		}
	}
}