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

int B, C, D;
int min_cnt = 99999;
int price;
int no_sale_price = 0;
int sale_price = 0;
vector<int> burger;
vector<int> side;
vector<int> drink;

int main()
{
	cin >> B >> C >> D;
	
	for (int i = 0; i < B; i++)
	{
		cin >> price;
		burger.push_back(price);
		no_sale_price += price;
	}

	for (int i = 0; i < C; i++)
	{
		cin >> price;
		side.push_back(price);
		no_sale_price += price;
	}

	for (int i = 0; i < D; i++)
	{
		cin >> price;
		drink.push_back(price);
		no_sale_price += price;
	}

	min_cnt = min({ B,C,D });

	sort(burger.begin(), burger.end(), std::greater<int>());
	sort(side.begin(), side.end(), std::greater<int>());
	sort(drink.begin(), drink.end(), std::greater<int>());

	for (int i = 0; i < min_cnt; i++)
		sale_price += (burger[i] + side[i] + drink[i]) * 0.9;

	if (min_cnt < B)
		for (int i = min_cnt; i < burger.size(); i++)
			sale_price += burger[i];

	if (min_cnt < C)
		for (int i = min_cnt; i < side.size(); i++)
			sale_price += side[i];

	if (min_cnt < D)
		for (int i = min_cnt; i < drink.size(); i++)
			sale_price += drink[i];

	cout << no_sale_price << endl;
	cout << sale_price << endl;
}