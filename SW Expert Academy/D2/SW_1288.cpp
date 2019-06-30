#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
bool chk_num[10];

bool check_num()
{
	for (int i = 0; i < 10; i++)
	{
		if (!chk_num[i])
			return false;
	}
	return true;
}

int main()
{
	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		memset(chk_num, false, sizeof(chk_num));

		int num;
		int cur_num;

		cin >> num;
		cur_num = num;

		while (1)
		{
			string ss = to_string(cur_num);

			for (int i = 0; i < ss.size(); i++)
				chk_num[ss[i] - '0'] = true;
			
			if (check_num())
				break;

			cur_num += num;
		}

		cout << "#" << i << " " << cur_num << endl;
	}

	return 0;
}