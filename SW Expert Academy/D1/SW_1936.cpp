#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
int sum = 0;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a == 1)
	{
		if (b == 2)
			cout << "B";
		else
			cout << "A";
	}
	else if (a == 2)
	{
		if (b == 3)
			cout << "B";
		else
			cout << "A";
	}
	else if (a == 3)
	{
		if (b == 1)
			cout << "B";
		else
			cout << "A";
	}
}