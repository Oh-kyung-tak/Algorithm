#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;

//multiset => set에 중복값 저장 가능
int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		multiset<int> s;
		int t;
		cin >> t;

		for (int j = 0; j < t; j++)
		{
			char c;
			int n;
			cin >> c >> n;

			if (c == 'I')
				s.insert(n);
			else
			{
				if (s.size() > 0)
				{
					if (n == 1)
						s.erase(--s.end());
					else
						s.erase(s.begin());
				}
			}
		}

		if (s.size() == 0)
			printf("EMPTY\n");
		else
			printf("%d %d\n", *s.rbegin(), *s.begin());
		
	}
}

