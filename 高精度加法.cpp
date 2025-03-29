//#include <iostream>
//#include <string>
//#include<cmath>
//using namespace std;
//
//string num1, num2;
//int a[101], b[101], c[101];
//void strtovar(string num, int a[])
//{
//	for (int i = 0; i <= num.size(); i++)
//	{
//		a[num.size() - i] = num[i] - '0';
//	}
//}
//int main() {
//	cin >> num1 >> num2;
//	strtovar(num1, a);
//	strtovar(num2, b);
//	int lec = __max(num1.size(), num2.size())+1;
//	for (int i = 1; i <= lec; i++)
//	{
//		c[i] = a[i] + b[i]+c[i];
//		c[i + 1] += c[i] / 10;
//		c[i] %= 10;
//	}
//	cout << c[lec] << endl;
//	while (c[lec] == 0&&lec>0)
//	{
//		lec--;
//	}
//	for (int i = lec; i>=1; i--)
//	{
//		cout << c[i];
//	}
//	cout << endl;
//	return 0;
//}


































/*int main()
{
	cin >> n >> m;
	while (arr) {
		if (arr >= m + 1) {					//达到边界时打印解
			for (int i = 1; i <= m; i++)
				cout << setw(3) << a[i];	 //注意场宽设置
			cout << endl;
			arr--;						   //回溯到前一位
			continue;
		}
		if (!a[arr]) {						 //若该位置为空
			a[arr] = a[arr - 1] + 1;		 //在其前一位基础上加一
			arr++;
			continue;
		}
		if (a[arr] + m - arr < n) {			//**关键** 判定在当前位为a[arr]的情况下向后推(m - arr)位是否超出题目的最大数字限制
			a[arr++] ++;					 //当前位自加后挪至后一位	
			continue;
		}
		a[arr--] = 0;						//将当前位归零,回溯至前一位
	}
	return 0;
}*/
