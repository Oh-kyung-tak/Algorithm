#include <iostream>

using namespace std;

int main() {
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double alt1, alt2;
	alt1 = (x2 - x1) / (y2 - y1);
	alt2 = (x3 - x1) / (y3 - y1);
	if (alt1 == alt2) 
		printf("WHERE IS MY CHICKEN?");
	else 
		printf("WINNER WINNER CHICKEN DINNER!");
}
