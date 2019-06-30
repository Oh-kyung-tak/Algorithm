#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <queue>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		int num;
		int cnt = 0;
		cin >> num;

		for (int i = 1; i <= num; i++)
		{
			int temp = i;
			int sum = 0;

			while (1)
			{
				if (sum >= num)
				{
					if (sum == num)
						cnt++;

					break;
				}

				sum += temp;
				temp++;
			}
		}
		cout << "#" << Test_case << " " << cnt << endl;
		
		
	}

	return 0;
}