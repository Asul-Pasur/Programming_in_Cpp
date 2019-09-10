//=============================
//钱能.C++程序设计教程.第2版.北京 : 清华大学出版社, 2005
//Chap02--T13 字符图形类循环控制问题
//author: Asul-Pasur
//Time:   2019/9/10
//=============================

#include<iostream>
#include<cmath>
using namespace std;

void Print(int number);

int main()
{
	cout.width(5);
	cout << right << "*";
	for (int i = 1; i < 10; i++)		//第一行
	{
		Print(i);
	}
	cout << endl;

	for (int i = 1; i < 10; i++)		//第二行
	{
		cout << "------";
	}
	cout << endl;

	for (int i = 1; i < 10; i++)
	{
		Print(i);
		for (int j = 1; j <= i; j++)
		{
			Print(i*j);
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

void Print(int number)
{
	cout.width(5);
	cout << right << number;

	return;
}
