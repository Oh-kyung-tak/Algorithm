#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>
using namespace std;

string A, B;

int min_cmp = 5555;

int main()
{
	cin >> A >> B;

	int start = 0;
	int finish = A.size();

	while (finish <= B.size()) 
	{
		int cnt = 0;
		for (int i = start; i < finish; i++)
		{
			if (B[i] != A[i - start])
				cnt++;
		}

		start++;
		finish++;

		min_cmp = min(min_cmp, cnt);
	}
	
	cout << min_cmp << endl;
}
