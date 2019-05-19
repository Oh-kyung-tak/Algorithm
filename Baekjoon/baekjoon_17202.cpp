#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

string w1, w2;
string update_w;
int main()
{
	cin >> w1 >> w2;

	for (int i = 0; i < 8; i++)
	{
		update_w += w1[i];
		update_w += w2[i];
	}
	
	while (1)
	{
		string n_w = "";
		int size = update_w.size();

		for (int i = 0; i < size - 1; i++)
		{
			int num = (update_w[i] - '0') + (update_w[i + 1] - '0');
			n_w += (num % 10) + '0';
		}

		update_w = n_w;

		if (update_w.size() == 2)
		{
			cout << update_w << endl;
			break;
		}
			
	}
}