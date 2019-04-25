#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int people[101];
int N;
int cnt = 0;

void print()
{
	for (int i = 0; i < N; i++)
		cout << people[i] << " ";

	cout << endl;
}

int main() 
{
	
	cin >> N;

	for (int i = 0; i < N; i++)
		people[i] = i + 1;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		while (num > 0)
		{
			int tmp;
			tmp = people[i];
			people[i] = people[cnt - num];
			people[cnt - num] = tmp;
			num--;
		}
		cnt++;
	}

	print();
}
