#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

string A;
int B;
int max_n = -1;

vector<char> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> B;

	for (int i = 0; i < A.size(); i++)
		v.push_back(A[i]);

	sort(v.begin(), v.end());

	do
	{
		string temp;

		for (int i = 0; i < v.size(); i++)
			temp += v[i];
		
		if (temp[0] != '0')
		{
			if (stoi(temp) <= B)
				max_n = max(max_n, stoi(temp));
		}
		
	} while (next_permutation(v.begin(), v.end()));

	cout << max_n << endl;
}