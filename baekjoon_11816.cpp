#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
int check;
int last;
int sum = 0;
int start = 1;

int main()
{
	string s;
	cin >> s;

	if (s[0] == '0')
	{
		if (s[1] == 'x')
		{
			check = 16;
			last = 2;
		}
		else
		{
			check = 8;
			last = 1;
		}
	}
	else
	{
		check = 10;
		last = 0;
	}
		
	for (int i = s.size() - 1; i >= last; i--)
	{
		if (s[i] >= 'a')
		{
			int temp = s[i] - 'a' + 10;
			sum += temp * start;
		}
		else
			sum += (s[i] - '0') * start;

		start *= check;
	}

	cout << sum << endl;
}
