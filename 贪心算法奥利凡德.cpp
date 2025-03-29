#include<iostream>
#include<algorithm>
using namespace std;
int m, n,ans;
struct good
{
	int price;
	int num;
};
good goods[20];
bool cmp(good a,good b)
{
	return  a.price < b.price;
}
int main()
{
	cin >> m >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> goods[i].price >> goods->num;
	}
	sort(goods,goods+n,cmp);
	for (int i = 0; i < n; i++)
	{
		if (goods[i].num*goods[i].price <= m)
		{
			m -= goods[i].num*goods[i].price;
			ans += goods[i].num;
		}
		else if (goods[i].price <= m)
		{
			while (m >= 0 && goods[i].num > 0)
			{
				m -= goods[i].price;
				ans += 1;
				goods[i].num -= 1;
			}
			break;
		}
		else
			break;
	}
	cout << ans;
	return 0;
}