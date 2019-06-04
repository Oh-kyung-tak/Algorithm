#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

using namespace std;


char tw[12] = { 'J','K','L','A','B','C','D','E','F','G','H','I'};
int ten[10] = { 7,8,9,0,1,2,3,4,5,6 };

int N;

int main()
{
	cin >> N;
	N--;
	N = N % 60;
	cout << tw[N % 12] << ten[N % 10] << endl;
}