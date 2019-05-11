#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int A, B;
int N;

int min_button = 9999999999;

int main() 
{
	cin >> A >> B;
	min_button = abs(A - B);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		min_button = min(min_button, abs(B - num) + 1);
	}
	
	cout << min_button << endl;
}
