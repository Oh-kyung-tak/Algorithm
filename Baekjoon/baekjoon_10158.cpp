#include <cstdio> 
#include <stdlib.h> 
int  w, h, x, y, t;
int  main() {
	int dx = 1;
	int dy = 1;

	scanf("%d %d %d %d %d", &w, &h, &x, &y, &t);
	
	for (int i = 0; i < t; i++)
	{
		if (x + dx > w || x + dx < 0)
			dx = -dx;
		if (y + dy > h || y + dy < 0)
			dy = -dy;

		x += dx;
		y += dy;
	}

	printf("%d %d", x, y);
}
