#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<char> v;
	int A;

	string word;

	cin >> A;

	while (A)
	{
		int temp;

		temp = A % 9;

		if (temp < 10)
		{
			v.push_back(char(temp) + '0');
		}
		else
		{
			char c = 'A';
			c = (c + temp) - 10;
			v.push_back(c);
		}

		A /= 9;
	}

	for (int i = v.size() - 1; i >= 0; i--)
		word += v[i];

	cout << word << endl;
}
	

	
