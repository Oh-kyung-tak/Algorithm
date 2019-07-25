#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string.h>

using namespace std;

int S1, S2;
int result = 0;
int main()
{
	cin >> S1 >> S2;

	for (int i = 0; i < S1; i++)
	{
		long long int ans1, ans2;
		cin >> ans1 >> ans2;
		if (ans1 != ans2)
			result = 1;
	}

	if (result == 0)
	{
		for (int i = 0; i < S2; i++)
		{
			long long int ans1, ans2;
			cin >> ans1 >> ans2;
			if (ans1 != ans2)
				result = 2;
		}
	}

	if (result == 0)
		cout << "Accepted" << endl;
	else if (result == 1)
		cout << "Wrong Answer" << endl;
	else
		cout << "Why Wrong!!!" << endl;
}