#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		double num;
		string word;
		
		cin >> num >> word;

		cout << Test_case << " ";

		
		cout << fixed;
		cout.precision(4);

		if (word == "kg")
			cout << num * 2.2046 << " " << "lb" << endl;
		else if (word == "lb")
			cout << num * 0.4536 << " " << "kg" << endl;
		else if (word == "l")
			cout << num * 0.2642 << " " << "g" << endl;
		else
			cout << num * 3.7854 << " " << "l" << endl;
	}
}