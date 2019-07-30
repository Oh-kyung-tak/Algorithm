#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int N;
int first_max = -1, second_max = -1, third_max = -1;
int first_min = 10, second_min = 10, third_min = 10;
int main()
{
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int a, b, c;
		int t_a, t_b, t_c, t2_a, t2_b, t2_c;
		cin >> a >> b >> c;
		
		if (i == 0)
		{
			first_max = a; second_max = b; third_max = c;
			first_min = a; second_min = b; third_min = c;
		}
		else
		{
			t_a = first_max; t_b = second_max; t_c = third_max;
			t2_a = first_min, t2_b = second_min, t2_c = third_min;
			first_max = max({ t_a + a, t_b + a });
			second_max = max({ t_a + b, t_b + b, t_c + b });
			third_max = max({ t_b + c, t_c + c });
			first_min = min({ t2_a + a, t2_b + a });
			second_min = min({ t2_a + b, t2_b + b, t2_c + b });
			third_min = min({ t2_b + c, t2_c + c });
		}
	}

	cout << max({ first_max, second_max, third_max }) << " " << min({ first_min, second_min, third_min });
}