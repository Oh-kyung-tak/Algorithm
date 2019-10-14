#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>
#include <map>

using namespace std;

int A, B, C, N;

map <string, long long int> normal;
map <string, long long int> special;
map <string, int> service;

long long int normal_sum = 0;
long long int special_sum = 0;
int service_cnt = 0;

string temp;
long long int money;

int main()
{
	cin >> A >> B >> C;

	for (int i = 0; i < A; i++)
	{
		cin >> temp >> money;
		normal[temp] = money;
	}

	for (int i = 0; i < B; i++)
	{
		cin >> temp >> money;
		special[temp] = money;
	}

	for (int i = 0; i < C; i++)
	{
		cin >> temp;
		service[temp] = 1;
	}

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;

		if (normal[temp])
			normal_sum += normal[temp];
		
		if (special[temp])
			special_sum += special[temp];

		if (service[temp])
			service_cnt += 1;
	}

	if (special_sum > 0)
	{
		if (service_cnt >= 1)
		{
			if (normal_sum >= 20000 && normal_sum + special_sum >= 50000 && service_cnt == 1)
				cout << "Okay";
			else
				cout << "No";
		}
		else
		{
			if (normal_sum >= 20000)
				cout << "Okay";
			else
				cout << "No";
		}
	}
	else
	{
		if (service_cnt >= 1)
		{
			if (normal_sum >= 50000 && service_cnt == 1)
				cout << "Okay";
			else
				cout << "No";
		}
		else
			cout << "Okay";
	}
		
}