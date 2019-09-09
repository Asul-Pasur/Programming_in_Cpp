//=============================
//钱能.C++程序设计教程.第2版.北京 : 清华大学出版社, 2005
//Chap2--T5 素数判定类循环控制问题
//author: Asul-Pasur
//Time:   2019/9/9
//=============================

#include<iostream>
#include<cmath>
using namespace std;

bool Is_Prime(int number);		//判断一个数是否为素数；

int main()
{
	int count = 0;
	int number = 0;
	cout << "answer = ";
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			number = 100 * i + 10 * j + i;
			if (Is_Prime(number))
			{
				count++;
				cout << number << " ";
			}
		}
	}
	cout << endl;

	system("pause");
	return 0;
}

bool Is_Prime(int number)
{
	if (number <= 3)
	{
		return true;
	}
	if (number % 2 == 0)
	{
		return false;
	}

	double limit = sqrt(number);
	int i = 3;

	for (; i <= limit; i = i + 2)
	{
		if (number%i == 0)
			break;
	}
	if (i <= limit)
	{
		return false;
	}
	else
	{
		return true;
	}
}
