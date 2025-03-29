//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//string s;
//int a[101],c[101];
//long long b;
//int tem;
//void strtoint(string num, int a[])
//{
//	for (int i = 0; i < num.size(); i++)
//	{
//		a[i + 1] = num[i] - '0';
//	}
//}
//int main()
//{
//	cin >> s;
//	strtoint(s, a);
//	cin >> b;
//	for (int i = 1; i <= s.size(); i++)
//	{
//		c[i] = (tem * 10 + a[i]) / b;
//		tem = (tem * 10 + a[i]) % b;
//	}
//	int lc = 1;
//	while (c[lc] == 0 && lc < s.size())
//	{
//		lc++;
//	}
//	for (int i = lc; i <= s.size(); i++)
//	{
//		cout << c[i];
//	}
//	cout << endl << tem << endl;
//	return 0;
//}