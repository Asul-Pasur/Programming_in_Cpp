//=============================
//钱能.C++程序设计教程.第2版.北京 : 清华大学出版社, 2005
//Chap03--T3 vector标准差计算
//author: Asul-Pasur
//Time:   2019/9/16
//=============================

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

double deviation(vector<double>& c);

int main()
{
	double a[10] = { 6,3,7,1,4,8,2,9,11,5 };
	vector<double> b(a, a + sizeof(a) / sizeof(a[0]));
	vector<double>& c = b;
	
	double answer = deviation(c);
	cout << "answer = " << answer << endl;

	system("pause");
	return 0;
}

double deviation(vector<double>& c)
{
	double dev = 0;
	double mean = 0;
	double number = c.size();
	for (int i = 0; i < number; i++)
	{
		mean += c[i];
	}
	mean /= number;
	cout << "mean = " << mean << endl;

	for (int i = 0; i < number; i++)
	{
		dev += pow(c[i] - mean, 2);
	}
	dev /= number;
	dev = sqrt(dev);

	return dev;
}
