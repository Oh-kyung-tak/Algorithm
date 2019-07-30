#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int N;
int money = 5000;
int vender[3] = { 500,800,1000 };

int main()
{
	while (scanf("%d", &N) != EOF)
		money -= vender[N - 1];
	

	cout << money << endl;
}