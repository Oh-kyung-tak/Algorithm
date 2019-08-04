#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;
int N;
int total_cnt = 0;

int main()
{
	cin >> N;

	while (N--)
	{
		bool ck = true;
		double total_sum;
		double len, width, depth, weight;

		cin >> len >> width >> depth >> weight;
		total_sum = len + width + depth;

		if (len > 56 || width > 45 || depth > 25)
		{
			if (total_sum > 125)
				ck = false;
		}
		
		if (weight > 7)
			ck = false;

		if (ck)
		{
			cout << "1" << endl;
			total_cnt++;
		}
		else 
			cout << "0" << endl;
	}

	cout << total_cnt << endl;
}