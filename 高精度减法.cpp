//#include<iostream>
//using namespace std;
//#include<cmath>
//#include<string>
//string num1, num2;
//int a[101], b[101], c[101];
//int comstr(string a,string b)
//{
//	if (a.size() != b.size())
//		return a.size() > b.size();
//	else return a >= b;
//
//}
//void strtoint(string num, int a[])
//{
//	for (int i = 0; i <= num.size(); i++)
//	{
//		a[num.size() - i] = num[i]-'0';
//	}
//}
//int main()
//{
//	cin >> num1 >> num2;
//	if (!comstr(num1, num2))
//	{
//		swap(num1, num2);
//		cout << "-";
//    }
//	/*cout << num1 << endl;*/
//	strtoint(num1, a);
//	strtoint(num2, b);
//	/*for (int i = 1; i <= num1.size(); i++)
//	{
//		cout << a[i];
//	}*/
//	int la = num1.size();
//	int lb = num2.size();
//	int lc = __max(la, lb);
//	/*cout << lc << endl;*/
//	for (int i = 1; i <= lc; i++)
//	{
//		if (a[i] < b[i])
//		{
//			a[i + 1]--;
//			a[i] += 10;
//		}
//		c[i] = a[i] - b[i];
//	}
//	while (c[lc] == 0 && lc >1)
//	{
//		lc--;
//	}
//	for (int i = lc; i > 0; i--)
//	{
//		cout << c[i];
//	}
//	cout << endl;
//	return 0;
//}