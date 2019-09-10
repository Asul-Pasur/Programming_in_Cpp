//=============================
//钱能.C++程序设计教程.第2版.北京 : 清华大学出版社, 2005
//Chap2--T1 级数逼近类循环控制问题
//author: Asul-Pasur
//Time:   2019/9/9
//=============================

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double result = 1;
	double x;
	double ith_number;

	cin >> x;
	ith_number = x;

	for (int i = 2; abs(ith_number) >= 1e-8; i++)
	{
		result += ith_number;
		ith_number = ith_number * -1 * x / double(i);
	}

	cout.precision(8);
	cout << "ith_number = " << scientific << ith_number << endl;

	cout.precision(8);
	cout << "answer = " << scientific << result << endl;

	system("pause");
	return 0;
}
