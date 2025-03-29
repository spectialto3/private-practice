//#include<iostream>
//using namespace std;
//#include<cmath>
//#include<string>
//string num1, num2;
//int a[101], b[101], c[101];
//void  strtoint(string num,int a[])
//{
//	for (int i = 0; i < num.size(); i++)
//	{
//		a[num.size() - i] = num[i]-'0';
//	}
// }
//
//int main()
//{
//	cin >> num1 >> num2;
//	strtoint(num1, a);
//	strtoint(num2, b);
//	int lc = num1.size() + num2.size();
//	for (int i = 1; i <= num1.size(); i++)
//	{
//		for (int j = 1; j <= num2.size(); j++)
//		{
//			c[i + j - 1] = a[i] * b[j] + c[i + j - 1];
//			c[i + j] += a[i + j - 1] / 10;
//			c[i + j - 1] %= 10;
//		}
//	}
//	while (c[lc] == 0 && lc > 1)
//	{
//		lc--;
//	}
//	for (int i = lc; i > 0; i--)
//	{
//		cout << c[i];
//	}
//	return 0;
//}