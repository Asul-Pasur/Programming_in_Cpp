//=============================
//钱能.C++程序设计教程.第2版.北京 : 清华大学出版社, 2005
//Chap03--T1 打印整数-1234567二进制位码
//author: Asul-Pasur
//Time:   2019/9/16
//=============================

#include<iostream>

using namespace std;

int main()
{
	int  number = -67;
	int* pa = &number;

	for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
	{
		cout << (*pa >> i & 1) << (i == 31 ? "-" : " ");
	}
	cout << "\n";

	system("pause");
	return 0;
}
