#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

stack<long long int> s;
long long int N;
long long int top, bottom;

int gcd(long long int x, long long int y)
{
	if (x < y)
	{
		long long int temp;
		temp = x;
		x = y;
		y = temp;
	}

	while (y != 0)
	{
		long long int temp;
		temp = x % y;
		x = y;
		y = temp;
	}

	return x;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		s.push(temp);
	}

	top = 1;
	bottom = s.top();

	s.pop();

	while (!s.empty())
	{
		 top = s.top() * bottom + top;
		 
		 long long int gc = gcd(top, bottom);
		 top /= gc;
		 bottom /= gc;

		 swap(top, bottom);
		 s.pop();
	}

	cout << bottom - top << " " << bottom << endl;
	
}