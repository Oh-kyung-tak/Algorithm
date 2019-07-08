#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;
int num[10];
vector<string> v;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	v.push_back("ZRO");
	v.push_back("ONE");
	v.push_back("TWO");
	v.push_back("THR");
	v.push_back("FOR");
	v.push_back("FIV");
	v.push_back("SIX");
	v.push_back("SEV");
	v.push_back("EGT");
	v.push_back("NIN");

	for (test_case = 0; test_case < T; test_case++)
	{
		memset(num, 0, sizeof(num));

		string word;
		int nn;

		cin >> word >> nn;

		for (int i = 0; i < nn; i++)
		{
			string temp;
			cin >> temp;

			if (temp == "ZRO")
				num[0]++;
			else if (temp == "ONE")
				num[1]++;
			else if (temp == "TWO")
				num[2]++;
			else if (temp == "THR")
				num[3]++;
			else if (temp == "FOR")
				num[4]++;
			else if (temp == "FIV")
				num[5]++;
			else if (temp == "SIX")
				num[6]++;
			else if (temp == "SVN")
				num[7]++;
			else if (temp == "EGT")
				num[8]++;
			else
				num[9]++;

		}
		
		cout << "#" << test_case  + 1<< " ";
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < num[i]; j++)
				cout << v[i] << " ";
		}
		cout << endl;
	}

	return 0;
}