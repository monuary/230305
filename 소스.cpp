//���������� static : ����� ���� �������� ���� ����.
//�Լ� ���� static : �ѹ��� �ʱ�ȭ. �Լ� �ۿ����� �Ҹ���� �ʴ´�.

#include<iostream>
using namespace std;

void Counter()
{
	static int cnt;	//�ʱ�ȭ���� ������ 0���� �ʱ�ȭ�ȴ�. �� �ѹ��� �ʱ�ȭ�Ǳ� ������ Counter�� ��ȣ��Ǿ cnt�� �����ִ�.
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)Counter();
	return 0;
}