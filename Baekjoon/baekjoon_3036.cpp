#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int N;
vector<int> v;
int first;

int gcd(int a, int b)
{
	int c;

	if (a < b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}
int main() 
{
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int num; 
		cin >> num;
		v.push_back(num);
	}

	first = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		cout << first / gcd(first, v[i]) << "/"; 
		cout << v[i] / gcd(first, v[i]) << endl;
	}
}


