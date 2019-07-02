#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int box_num[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		string word;
		
		cin >> word;

		int num = word[word.size() - 1] - '0';

		
		cout << '#' << Test_case << " ";
		if (num % 2 == 0)
			cout << "Even";
		else
			cout << "Odd";
		cout << endl;
	}
}