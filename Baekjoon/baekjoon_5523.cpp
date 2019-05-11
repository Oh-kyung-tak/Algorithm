#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int ac, bc = 0;

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int ta, tb;
		scanf("%d %d", &ta, &tb);

		if (ta > tb)
			ac++;
		else if (ta < tb)
			bc++;
	}

	printf("%d %d", ac, bc);
}
