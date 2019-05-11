#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<char> v;

int main()
{
	long long int N;
	int B;

	cin >> N >> B;

	while (N)
	{
		int temp;
		
		temp = N % B;

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

		N /= B;
	}

	for (int i = v.size() - 1; i >= 0; i--)
		cout << v[i];
}
