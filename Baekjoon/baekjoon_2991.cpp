#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

int time[1001];
int A, B, C, D;
int P, M, N;
int main()
{
	cin >> A >> B >> C >> D;

	for (int i = 1; i < 1001; i += A + B)
		for (int j = i; j < i + A; j++)
			time[j]++;

	for (int i = 1; i < 1001; i += C + D)
		for (int j = i; j < i + C; j++)
			time[j]++;

	cin >> P >> M >> N;
	cout << time[P] << endl;
	cout << time[M] << endl;
	cout << time[N] << endl;
}


