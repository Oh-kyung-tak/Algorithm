#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

string a;
int anum;
int bnum;
int len;
int count = 0;
int main(void)
{
	cin >> a >> bnum;
	
	anum = stoi(a);

	len = a.size();

	for (int i = 0; i < len * anum; i++)
	{
		if (i == bnum)
			break;

		cout << a[i % len];
	}
}
