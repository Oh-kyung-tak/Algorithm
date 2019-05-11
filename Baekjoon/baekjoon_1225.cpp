#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string a, b;
	long long int sum = 0;
	int alen, blen;

	cin >> a >> b;

	alen = a.size();
	blen = b.size();
	
	for (int i = 0; i < alen; i++)
	{
		for (int j = 0; j < blen; j++)
			sum += (a[i] - '0') * (b[j] - '0');
	}

	cout << sum << endl;
}
