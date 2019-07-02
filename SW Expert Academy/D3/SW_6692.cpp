#include <iostream>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int N;
		double sum = 0;
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			double a, b;
			cin >> a >> b;
			sum += a * b;
		}

		cout << fixed;
		cout.precision(6);
		cout << "#" << Test_case << " " << sum << endl;
	}
}