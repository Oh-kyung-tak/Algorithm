#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		string name;
		int score;
		cin >> name >> score;

		if (score >= 97)
			cout << name << " A+" << endl;
		else if (score >= 90)
			cout << name << " A" << endl;
		else if (score >= 87)
			cout << name << " B+" << endl;
		else if (score >= 80)
			cout << name << " B" << endl;
		else if (score >= 77)
			cout << name << " C+" << endl;
		else if (score >= 70)
			cout << name << " C" << endl;
		else if (score >= 67)
			cout << name << " D+" << endl;
		else if (score >= 60)
			cout << name << " D" << endl;
		else if (score >= 0)
			cout << name << " F" << endl;
	}
}