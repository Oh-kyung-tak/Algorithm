#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

vector<int> v;

int main() 
{
	int num;
	int min_money = 0;
	int max_money = -1;
	int limit;
	int sum_money = -1;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int money;
		scanf("%d", &money);
		v.push_back(money);
		min_money = min(min_money, money);
		max_money = max(max_money, money);
	}

	scanf("%d", &limit);

	while(min_money <= max_money)
	{
		int temp;
		int temp_money = 0;
		temp = (min_money + max_money) / 2;

		for (int i = 0; i < v.size(); i++)
		{
			if (temp <= v[i])
				temp_money += temp;
			else
				temp_money += v[i];
		}

		if (temp_money <= limit)
		{
			min_money = temp + 1;
			sum_money = max(sum_money, temp_money);
		}
		else
			max_money = temp - 1;

	}

	printf("%d", min_money - 1);
}
