#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

int T;
int bus[5001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(bus, 0, sizeof(bus));
		int N;
		int P;
		vector<int> v;
		
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			int a, b;
			cin >> a >> b;
			for (int i = a; i <= b; i++)
				bus[i]++;
		}

		cin >> P;

		for (int i = 0; i < P; i++)
		{
			int temp;
			cin >> temp;
			v.push_back(bus[temp]);
		}

		cout << '#' << Test_case << " ";
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	}
}