#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<char> _sign, vector<int> num)
{
	for (int i = 0; i < _sign.size(); ++i)
	{
		if (_sign[i] == '>' && num[i] < num[i + 1])
			return false;
		if (_sign[i] == '<' && num[i] > num[i + 1])
			return false;
	}
	return true;
}

int main()
{
	vector<char> sign;
	vector<int> num_max;
	vector<int> num_min;

	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		char c;
		cin >> c;
		sign.push_back(c);
	}
	
	for (int i = 9; i >= 9 - input; i--)
		num_max.push_back(i);

	for (int i = 0; i <= input; i++)
		num_min.push_back(i);
	
	do
	{
		if (check(sign, num_max))
			break;
	} while (prev_permutation(num_max.begin(), num_max.end()));

	do
	{
		if (check(sign, num_min))
			break;
	} while (next_permutation(num_min.begin(), num_min.end()));

	for (int i = 0; i < num_max.size(); ++i)
		cout << num_max[i];

	cout << endl;

	for (int i = 0; i < num_min.size(); ++i)
		cout << num_min[i];

	cout << endl;
	return 0;
}
