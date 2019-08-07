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
int M;

int main()
{
	cin >> N;

	while (N--)
	{
		int a = 0;
		string name;
		cin >> M;

		for (int i = 0; i < M; i++)
		{
			int price;
			string n;

			cin >> price >> n;

			if (price > a)
			{
				a = price;
				name = n;
			}
		}

		cout << name << endl;
	}
}

