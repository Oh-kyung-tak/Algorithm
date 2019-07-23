#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int A[8];
int B[8];
int C[8];

void check(int l_1, int l_2, int l_3, int r_1, int r_2, int r_3)
{
	int h, m, s;
	if (r_3 < l_3)
	{
		r_2--;
		s = 60 + r_3 - l_3;
	}
	else
		s = r_3 - l_3;

	if (r_2 < l_2)
	{
		r_1--;
		m = 60 + r_2 - l_2;
	}
	else
		m = r_2 - l_2;

	h = r_1 - l_1;

	cout << h << " " << m << " " << s << endl;
}

int main()
{
	for (int i = 1; i <= 6; i++)
		cin >> A[i];

	for (int i = 1; i <= 6; i++)
		cin >> B[i];

	for (int i = 1; i <= 6; i++)
		cin >> C[i];

	
	check(A[1], A[2], A[3], A[4], A[5], A[6]);
	check(B[1], B[2], B[3], B[4], B[5], B[6]);
	check(C[1], C[2], C[3], C[4], C[5], C[6]);
}