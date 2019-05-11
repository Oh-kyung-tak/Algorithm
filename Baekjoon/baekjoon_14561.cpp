#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int T;

	scanf("%d", &T);

	while (T--)
	{
		vector<char> v;
		long long int A;
		int n;
		string word;
		string r_word;

		cin >> A >> n;

		while (A)
		{
			int temp;

			temp = A % n;

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

			A /= n;
		}

		for (int i = v.size() - 1; i >= 0; i--)
			word += v[i];

		for (int i = 0; i < v.size(); i++)
			r_word += v[i];

		if (word == r_word)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}
