#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;
int main() 
{	
	int a, b, c, d;
	int sum = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	sum = a + b + c + d;

	printf("%d\n%d", sum / 60, sum % 60);
}
