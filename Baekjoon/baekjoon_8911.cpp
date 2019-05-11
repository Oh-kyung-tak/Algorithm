#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int i;
	char arr[500];

	int direction = 1;
	int area;
	int m;

	scanf("%d", &m);

	while (m--) {
		int xpos = 0, ypos = 0;
		int xmax = 0, xmin = 0, ymax = 0, ymin = 0;
		scanf("%s", arr);

		for (i = 0; arr[i]; i++) {
			if (arr[i] == 'F') {
				if (direction == 1) {
					ypos++;
					if (ypos > ymax) ymax = ypos;
				}
				else if (direction == 2) {
					xpos++;
					if (xpos > xmax) xmax = xpos;
				}
				else if (direction == 3) {
					ypos--;
					if (ypos < ymin) ymin = ypos;
				}
				else if (direction == 4) {
					xpos--;
					if (xpos < xmin) xmin = xpos;
				}
			}
			else if (arr[i] == 'B') {
				if (direction == 1) {
					ypos--;
					if (ypos < ymin) ymin = ypos;
				}
				else if (direction == 2) {
					xpos--;
					if (xpos < xmin) xmin = xpos;
				}
				else if (direction == 3) {
					ypos++;
					if (ypos > ymax) ymax = ypos;
				}
				else if (direction == 4) {
					xpos++;
					if (xpos > xmax) xmax = xpos;
				}
			}
			else if (arr[i] == 'R') {
				direction++;
				if (direction == 5) direction = 1;
			}
			else if (arr[i] == 'L') {
				direction--;
				if (direction == 0) direction = 4;
			}
		}
		printf("%d\n", (xmax - xmin) * (ymax - ymin));
	}
}
