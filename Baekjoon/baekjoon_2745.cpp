#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string word;
	int number;
	int sum = 0;
	int aa = 1;

	cin >> word >> number;

	for (int i = word.size() - 1; i >= 0; i--)
	{

		if (word[i] >= 'A')
			sum += (word[i] - '7') * aa;
		else
			sum += (word[i] - '0') * aa;

		aa *= number;
	}

	cout << sum;
}
