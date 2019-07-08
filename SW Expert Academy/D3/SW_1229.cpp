#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n;//testcase
	for (int n = 1; n < 11; n++)
	{
		vector<int> arr;//벡터로 배열을 만들어 길이의 제한을 없앤다
		vector<int>::iterator it;//iterator선언
		int len;//원본암호문의 길이
		cin >> len;
		for (int i = 0; i < len; i++)
		{
			int data;//원본암호
			cin >> data;
			arr.push_back(data);
		}
		int number;//명령어의 개수
		cin >> number;
		for (int i = 0; i < number; i++)
		{
			char l;
			int x, y;//x->위치 y->데이터의 숫자
			cin >> l >> x >> y;
			if (l == 'I')
			{
				for (int k = 0; k < y; k++)
				{
					int data;
					cin >> data;
					it = arr.begin();//it 에 벡터의 처음값을 가리키게함 및 다시 초기화
					it = arr.insert(it + x + k, data);//원하는 위치에 data삽입
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