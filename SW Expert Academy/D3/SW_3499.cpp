#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		vector<string> v;
		int N;
		
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			string temp;
			cin >> temp;
			v.push_back(temp);
		}
		
		int size = v.size();

		cout << "#" << Test_case << " ";
		if (size % 2 == 0)
		{
			for (int i = 0; i < size / 2; i++)
				cout << v[i] << " " << v[i + size / 2] << " ";

			cout << endl;
		}
		else
		{
			for (int i = 0; i < size / 2; i++)
				cout << v[i] << " " << v[i + size / 2 + 1] << " ";
			
			cout << v[size / 2];
			cout << endl;
		}
		
	}
}