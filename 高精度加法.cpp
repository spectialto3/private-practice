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
		if (arr >= m + 1) {					//�ﵽ�߽�ʱ��ӡ��
			for (int i = 1; i <= m; i++)
				cout << setw(3) << a[i];	 //ע�ⳡ������
			cout << endl;
			arr--;						   //���ݵ�ǰһλ
			continue;
		}
		if (!a[arr]) {						 //����λ��Ϊ��
			a[arr] = a[arr - 1] + 1;		 //����ǰһλ�����ϼ�һ
			arr++;
			continue;
		}
		if (a[arr] + m - arr < n) {			//**�ؼ�** �ж��ڵ�ǰλΪa[arr]������������(m - arr)λ�Ƿ񳬳���Ŀ�������������
			a[arr++] ++;					 //��ǰλ�ԼӺ�Ų����һλ	
			continue;
		}
		a[arr--] = 0;						//����ǰλ����,������ǰһλ
	}
	return 0;
}*/
