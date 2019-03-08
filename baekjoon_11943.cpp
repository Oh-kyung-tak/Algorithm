#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int A, B, C, D;

	scanf("%d %d %d %d", &A, &B, &C, &D);

	printf("%d", min(A + D, B + C));
}
