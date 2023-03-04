//전역변수의 static : 선언된 파일 내에서만 참조 가능.
//함수 내의 static : 한번만 초기화. 함수 밖에서도 소멸되지 않는다.

#include<iostream>
using namespace std;

void Counter()
{
	static int cnt;	//초기화하지 않으면 0으로 초기화된다. 단 한번만 초기화되기 때문에 Counter가 재호출되어도 cnt는 남아있다.
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)Counter();
	return 0;
}