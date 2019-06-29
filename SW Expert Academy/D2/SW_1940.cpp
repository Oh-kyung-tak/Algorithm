#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
 
int T;

int main()
{
    cin >> T;
 
    for (int k = 1; k <= T; k++)
    {
		int n;
		int speed = 0;
		int load = 0;

		cin >> n;

		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;

			if (temp == 1)
			{
				int t_s;
				cin >> t_s;
				speed += t_s;
			}
			else if (temp == 2)
			{
				int t_s;
				cin >> t_s;

				if (speed - t_s < 0)
					speed = 0;
				else
					speed -= t_s;
			}

			load += speed * 1;
		}

		cout << "#" << k << " " << load << endl;
    }
}