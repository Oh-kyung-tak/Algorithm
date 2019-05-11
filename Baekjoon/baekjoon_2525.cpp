#include<iostream>
#include<set>

using namespace std;

int main()
{
	int A, B;
	int C;
	int h, m;
	int carry = 0;

	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	h = C / 60;
	m = C % 60;
	
	if (B + m >= 60)
	{
		B = (B + m) - 60;
		carry = 1;
	}
	else
		B = B + m;

	if (A + h + carry >= 24)
	{
		A = (A + h + carry) - 24;
	}
	else
		A = A + h + carry;

	printf("%d %d", A, B);
}
