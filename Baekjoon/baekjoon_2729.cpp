#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<string>
#include<vector>

using namespace std;
int a_len, b_len;
int carry = 0;
int check_zero = 0;
int T;
vector<int> v;

int main()
{
	cin >> T;
	while (T--)
	{
		carry = 0;
		check_zero = 0;
		string a, b;
		cin >> a >> b;

		a_len = a.size();
		b_len = b.size();
	
		if (a_len < b_len)
		{
			int temp_len;
			string temp;

			temp_len = a_len;
			temp = a;
			a_len = b_len;
			a = b;
			b_len = temp_len;
			b = temp;
		}

		for (int i = a_len - 1; i >= 0; i--)
		{
			if (i > a_len - b_len - 1)
			{
				int sum = carry + (a[i] - '0') + (b[i - (a_len - b_len)] - '0');

				if (sum > 1)
				{
					carry = 1;
					if (sum == 2)
						sum = 0;
					else
						sum = 1;
				}
				else
					carry = 0;
				v.push_back(sum);
			}
			else
			{
				int sum = carry + (a[i] - '0');

				if (sum > 1)
				{
					carry = 1;
					sum = 0;
				}
				else
					carry = 0;
				v.push_back(sum);
			}
		}
	
		if (carry == 1)
			v.push_back(carry);

		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (v[i] == 0)
			{
				if (check_zero == 1)
					cout << v[i];
			}
			else
			{
				check_zero = 1;
				cout << v[i];
			}
		}
		
		if (check_zero == 0)
			cout << "0" << endl;
		else
			cout << endl;

		v.clear();
	}
}
