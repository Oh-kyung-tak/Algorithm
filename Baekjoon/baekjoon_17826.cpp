#include <iostream>
#include <map>

using namespace std;

map<int, int> m;
int score;

int main()
{
	for (int i = 1; i <= 50; i++)
	{
		int temp;
		cin >> temp;
		m[temp] = i;
	}

	cin >> score;
	int hak = m[score];

	if (hak >= 1 && hak <= 5)
		cout << "A+";
	else if (hak >= 6 && hak <= 15)
		cout << "A0";
	else if (hak >= 16 && hak <= 30)
		cout << "B+";
	else if (hak >= 31 && hak <= 35)
		cout << "B0";
	else if (hak >= 36 && hak <= 45)
		cout << "C+";
	else if (hak >= 46 && hak <= 48)
		cout << "C0";
	else
		cout << "F";

}