#include <iostream>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;

int x, y;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int gcd(int a, int b)
{
	if (a < b)
		swap(a, b);
	
	while (b != 0)
	{
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}

int main() 
{
	scanf("%d %d", &x, &y);


	cout << y - gcd(x,y) << endl;
}
