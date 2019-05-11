#include<iostream>
#include<set>
#include<algorithm>
#include<string>

using namespace std;

int n, k;

int main() {

	scanf("%d %d", &n, &k);

	while (k--) 
	{
		int x;
		scanf("%d", &x);
		n -= ((x + 1) / 2);
	}

	if (n <= 0)
		printf("YES");
	else 
		printf("NO");
}
