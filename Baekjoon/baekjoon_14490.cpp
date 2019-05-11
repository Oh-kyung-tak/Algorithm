#include<iostream>
#include<vector>
#include<string>

using namespace std;

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int gcd(int A, int B)
{
	if (A < B)
		swap(A, B);

	while (B != 0)
	{
		int tmp = A % B;
		A = B;
		B = tmp;
	}
	return A;
}
int main()
{
	int A, B;

	scanf("%d:%d", &A, &B);
	
	int num = gcd(A, B);

	printf("%d:%d", A / num, B / num);
	
}
	

	
