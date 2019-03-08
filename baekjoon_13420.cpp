#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>
long long int n, n1, n2, n3;
char c1, c2;
int arr[100000];
int main() {

	scanf("%lld", &n);
	
	for (int i = 0; i < n; i++) 
	{
		scanf("%lld %c %lld %c %lld", &n1, &c1, &n2, &c2, &n3);
		if (c1 == '+')
			if (n1 + n2 == n3) arr[i] = 0; else arr[i] = 1;;
		if (c1 == '*')
			if (n1 * n2 == n3) arr[i] = 0; else arr[i] = 1;;
		if (c1 == '/')
			if (n1 / n2 == n3) arr[i] = 0; else arr[i] = 1;
		if (c1 == '-')
			if (n1 - n2 == n3) arr[i] = 0; else arr[i] = 1;;
	}
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] == 1) {
			printf("wrong answer");
		}
		else {
			printf("correct");
		}
		if (i != n - 1) printf("\n");
	}
}
