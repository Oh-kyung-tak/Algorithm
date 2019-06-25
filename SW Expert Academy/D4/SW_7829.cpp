#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		vector<int> v;

		cin >> N;

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(), v.end());
		
		if (v.size() == 1)
			cout << "#" << test_case << " " << v[0] * v[0] << endl;
		else
			cout << "#" << test_case << " " << v[0] * v[v.size() - 1] << endl;
	}
	return 0;
}