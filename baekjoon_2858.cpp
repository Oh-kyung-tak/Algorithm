#include <stdio.h>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int R, B;
	int tile;
	scanf("%d %d", &R, &B);

	tile = R + B;

	for (int i = 1; i <= tile; i++)
	{
		if (tile % i == 0)
		{
			int width = i;
			int length = tile / i;

			if ((width * 2) + ((length - 2) * 2) == R)
			{
				if(length >= width)
					printf("%d %d", length, width);
				else
					printf("%d %d", width, length);
				return 0;
			}
		}
	}
}
