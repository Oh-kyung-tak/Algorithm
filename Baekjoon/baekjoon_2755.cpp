#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;
int N;
float sum = 0;
float hak = 0;
int main()
{
	cin >> N;

	while (N--)
	{
		string s, score;
		float cnt;
		
		cin >> s >> cnt >> score;

		if (score == "A+")
			sum += cnt * 4.3;
		else if (score == "A0")
			sum += cnt * 4.0;
		else if (score == "A-")
			sum += cnt * 3.7;
		else if (score == "B+")
			sum += cnt * 3.3;
		else if (score == "B0")
			sum += cnt * 3.0;
		else if (score == "B-")
			sum += cnt * 2.7;
		else if (score == "C+")
			sum += cnt * 2.3;
		else if (score == "C0")
			sum += cnt * 2.0;
		else if (score == "C-")
			sum += cnt * 1.7;
		else if (score == "D+")
			sum += cnt * 1.3;
		else if (score == "D0")
			sum += cnt * 1.0;
		else if (score == "D-")
			sum += cnt * 0.7;
		else
			sum += 0;
		hak += cnt;
	}
	cout << fixed;
	cout.precision(2);
	cout << sum / hak << endl;
}


