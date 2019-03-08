#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c, d, e;
	int minham;
	int mincan;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	minham = min(a, min(b, c));
	mincan = min(d, e);

	printf("%d", minham + mincan - 50);
}
