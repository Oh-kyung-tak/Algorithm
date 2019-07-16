#include <string>
#include <iostream>
#include <queue>

using namespace std;

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		string N;
		cin >> N;

		string median = N;
		median[0] = '5';
		for (int j = 1; j<median.length(); j++)
			median[j] = '0';

		if (stol(N)>stol(median))
		{
			string temp = median;
			for (int j = 0; j<median.length(); j++)
				temp[j] = 57 - median[j] + 48;

			long long int ss = stol(median)*stol(temp);
			cout << ss << endl;
		}
		else
		{
			string temp = N;
			for (int j = 0; j<N.length(); j++)
				temp[j] = 57 - N[j] + 48;

			long long int ss = stol(N)*stol(temp);
			cout << ss << endl;
		}
	}
}