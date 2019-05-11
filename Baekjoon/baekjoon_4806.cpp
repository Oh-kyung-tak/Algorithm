#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int cnt = 0;

int main()
{
	char c;
	while (scanf("%c", &c) != EOF)
	{
		if (c == '\n')
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}
