#include<iostream>
#include<set>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int N;
double ans = -1;

int main()
{
	cin >> N;

	vector<double> number(N);

	for (int i = 0; i < N; i++)
		cin >> number[i];

	for (int i = 0; i < N; i++)
	{
		double temp = 1;
		for (int j = i; j < N; j++)
		{
			temp *= number[j];

			if (temp > ans)
				ans = temp;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << ans << "\n";
	return 0;

}
