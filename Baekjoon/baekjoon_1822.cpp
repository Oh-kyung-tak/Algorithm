#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <set>
#define MAX 1001

using namespace std;

int a, b;
set<int> s;
int main()
{
	scanf("%d %d", &a, &b);
	int cnt = a;

	for (int i = 0; i < a; i++)
	{
		int temp;
		scanf("%d", &temp);
		s.insert(temp);
	}

	for(int i = 0; i < b; i++)
	{
		int temp;
		scanf("%d", &temp);
		
		auto it = s.find(temp);
		if (it == s.end())
			continue;
		else
			s.erase(it);
	}

	printf("%d\n", s.size());
	for (auto num : s)
		printf("%d ", num);
	
}