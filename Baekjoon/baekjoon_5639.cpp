#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

//Tree 구조체의 갯수 설정
struct Tree {
	int left = 0;
	int right = 0;
};

Tree tree[1000001];

void postorder(int n)
{
	if (tree[n].left != 0)
		postorder(tree[n].left);

	if (tree[n].right != 0)
		postorder(tree[n].right);

	printf("%d\n", n);
}

int main()
{
	int r, temp;
	cin >> r;

	while (cin >> temp)
	{
		int node = r;

		while (1)
		{
			if (node < temp)
			{
				if (tree[node].right == 0)
				{
					tree[node].right = temp;
					break;
				}
				else
					node = tree[node].right;
			}
			else
			{
				if (tree[node].left == 0)
				{
					tree[node].left = temp;
					break;
				}
				else
					node = tree[node].left;
			}
		}
	}
	postorder(r);
	return 0;
}

