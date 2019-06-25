#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int T;

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		int m_num = 0;

		for (int i = 0; i < 10; i++)
		{
			int num;
			cin >> num;
			m_num = max(num, m_num);
		}

		cout << "#" << k << " " << m_num << endl;
	}
}