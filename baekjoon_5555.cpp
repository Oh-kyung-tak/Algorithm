#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;
int main() 
{	
	string word;
	int num;
	int count = 0;

	cin >> word;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		string ring;
		string tworing;

		cin >> ring;

		tworing = ring + ring;

		int n = tworing.find(word);

		if (n != -1)
			count++;
	}

	cout << count;
}
