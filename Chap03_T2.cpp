//=============================
//钱能.C++程序设计教程.第2版.北京 : 清华大学出版社, 2005
//Chap03--T2 打印各类型字节长度与位长
//author: Asul-Pasur
//Time:   2019/9/16
//=============================

#include<iostream>

using namespace std;

void Print(int size);

int main()
{
	int  number = -123;
	int* pa = &number;

	cout << left;
	cout.width(11);
	cout << "long int";
	Print(sizeof(long int));

	cout.width(11);
	cout << "int";
	Print(sizeof(int));

	cout.width(11);
	cout << "char";
	Print(sizeof(char));

	cout.width(11);
	cout << "bool";
	Print(sizeof(bool));

	cout.width(11);
	cout << "float";
	Print(sizeof(float));

	cout.width(11);
	cout << "double";
	Print(sizeof(double));

	cout.width(11);
	cout << "long double";
	Print(sizeof(long double));

	system("pause");
	return 0;
}

void Print(int size)
{
	cout << " " << size << " byte ";
	cout.width(2);
	cout << size * 8 << " bits" << endl;

	return;
}
