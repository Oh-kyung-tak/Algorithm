#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;

int n;

struct node {
	char left;
	char right;
};

struct node tree[100];

void preorder(char root)
{
	if (root == '.')
		return;
	else
	{
		cout << root;
		preorder(tree[root].left);
		preorder(tree[root].right);
	}
}

void inorder(char root)
{
	if (root == '.')
		return;
	else
	{
		inorder(tree[root].left);
		cout << root;
		inorder(tree[root].right);
	}
}

void postorder(char root)
{
	if (root == '.')
		return;
	else
	{
		postorder(tree[root].left);
		postorder(tree[root].right);
		cout << root;
	}
}

int main()
{
	cin >> n;

	char t1, t2, t3;

	for (int i = 1; i <= n; i++)
	{
		cin >> t1 >> t2 >> t3;
		tree[t1].left = t2;
		tree[t1].right = t3;
	}
		
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';	
	postorder('A');
	cout << '\n';
}
