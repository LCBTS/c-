#include<iostream>
using namespace std;
#include<string>

int& test() {
	static int a = 10;//在程序结束后由系统释放
		return a;
}
int main()
{
	int& re = test();
	cout << re << endl;
	test() = 1000;//如果一个函数的返回值是引用那么它可以被赋值
	cout << re << endl;
}
