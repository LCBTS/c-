#include<iostream>
using namespace std;
#include<string>

int& test() {
	static int a = 10;//�ڳ����������ϵͳ�ͷ�
		return a;
}
int main()
{
	int& re = test();
	cout << re << endl;
	test() = 1000;//���һ�������ķ���ֵ��������ô�����Ա���ֵ
	cout << re << endl;
}
