#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int sum = 0;

		for (int i = 0; i < 5; i++)
		{
			int temp;
			cin >> temp;
			if (temp < 40)
				sum += 40;
			else
				sum += temp;
		}

		cout << "#" << Test_case << " " << sum / 5 << endl;

	}
}