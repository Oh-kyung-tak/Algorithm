#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int N, M;
int sum = 0;
vector<int> v_minus;
vector<int> v_plus;

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		if (temp < 0)
			v_minus.push_back(temp * -1);
		else
			v_plus.push_back(temp);
	}

	sort(v_minus.begin(), v_minus.end(), greater<int>());
	sort(v_plus.begin(), v_plus.end(), greater<int>());
	
	if (v_plus.size() == 0)
	{
		sum += v_minus[0];

		for (int i = M; i < v_minus.size(); i += M)
			sum += (v_minus[i] * 2);
	}
	else if (v_minus.size() == 0)
	{
		sum += v_plus[0];

		for (int i = M; i < v_plus.size(); i += M)
			sum += (v_plus[i] * 2);
	}
	else
	{
		if (v_plus[0] < v_minus[0])
		{
			sum += v_minus[0];

			for (int i = M; i < v_minus.size(); i += M)
				sum += (v_minus[i] * 2);

			for (int i = 0; i < v_plus.size(); i += M)
				sum += (v_plus[i] * 2);
		}
		else if (v_plus[0] > v_minus[0])
		{
			sum += v_plus[0];

			for (int i = 0; i < v_minus.size(); i += M)
				sum += (v_minus[i] * 2);

			for (int i = M; i < v_plus.size(); i += M)
				sum += (v_plus[i] * 2);
		}
	}


	cout << sum << endl;
}