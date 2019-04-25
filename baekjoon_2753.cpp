#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
bool year[4001];
int yea;

int main()
{
	for (int i = 1; i <= 4000; i++)
		if (i % 4 == 0)
			year[i] = true;

	for (int i = 1; i <= 4000; i++)
		if (i % 100 == 0)
			year[i] = false;

	for (int i = 1; i <= 4000; i++)
		if (i % 400 == 0)
			year[i] = true;

	cin >> yea;

	if (year[yea] == false)
		cout << 0;
	else
		cout << 1;
}
