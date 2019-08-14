#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

bool prime[2001];
string word;
int sum = 0;

int main()
{
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = true;

	for (int i = 2; i <= sqrt(2000); i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 2000; j += i)
				prime[j] = false;
		}
	}

	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			sum += word[i] - 'a' + 1;
		else
			sum += word[i] - 'A' + 27;
	}

	if (prime[sum])
		cout << "It is a prime word." << endl;
	else
		cout << "It is not a prime word." << endl;
}