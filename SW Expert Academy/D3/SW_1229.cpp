#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n;//testcase
	for (int n = 1; n < 11; n++)
	{
		vector<int> arr;//���ͷ� �迭�� ����� ������ ������ ���ش�
		vector<int>::iterator it;//iterator����
		int len;//������ȣ���� ����
		cin >> len;
		for (int i = 0; i < len; i++)
		{
			int data;//������ȣ
			cin >> data;
			arr.push_back(data);
		}
		int number;//��ɾ��� ����
		cin >> number;
		for (int i = 0; i < number; i++)
		{
			char l;
			int x, y;//x->��ġ y->�������� ����
			cin >> l >> x >> y;
			if (l == 'I')
			{
				for (int k = 0; k < y; k++)
				{
					int data;
					cin >> data;
					it = arr.begin();//it �� ������ ó������ ����Ű���� �� �ٽ� �ʱ�ȭ
					it = arr.insert(it + x + k, data);//���ϴ� ��ġ�� data����
				}
			}
			else
			{
				it = arr.begin();
				arr.erase(it + x, it + x + y);
			}
		}
		cout << "#" << n << " ";
		for (int i = 0; i < 10; i++)
			cout << arr.at(i) << " ";
		cout << endl;
	}
}