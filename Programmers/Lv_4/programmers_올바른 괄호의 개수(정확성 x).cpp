#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long int fac[30];

//Ä«Å»¶õ ¼ö °³³ä ÀÌ¿ë??
long long int solution(int n) {

	fac[0] = 1;
	fac[1] = 1;

	for (int i = 2; i <= 28; i++)
		fac[i] = fac[i - 1] * i;

	return fac[2 * n] / (fac[n] * fac[n + 1]);
}