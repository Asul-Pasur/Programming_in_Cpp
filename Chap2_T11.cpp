//=============================
//钱能.C++程序设计教程.第2版.北京 : 清华大学出版社, 2005
//Chap2--T11 逻辑判定类循环控制问题
//author: Asul-Pasur
//Time:   2019/9/10
//=============================

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int count = 0;
	int money = 100 - 10 - 5 - 1;								//每种钞票预留一张；

	for (int i = 0; i <= money / 10; i++)						//i是10元的张数-1；
	{
		for (int j = 0; j <= (money - 10 * i) / 5; j++)			//j是5元的张数-1,money - 10 * i - 5 * j + 1是剩下的一元的张数；
		{
			count++;
			cout << "ten = " << i + 1 << " five = " << j + 1 << "  one = " << money - 10 * i - 5 * j + 1 << endl;
		}
	}

	cout << "count = " << count << endl;

	system("pause");
	return 0;
}
