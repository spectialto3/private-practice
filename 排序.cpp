//#include<iostream>
//#include<vector>
//using namespace std;
//int a[1001];
//int num;
//void bubblesort(int a[],int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		bool flag = true;//ð��������Ż�
//		for (int j = 0; j < num - i-1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				swap(a[j], a[j + 1]);
//				flag = false;
//			}
//		}
//		if (flag) break;
//			
//	}
//	return;
//}//ʱ�临�Ӷ�O��n^2�����ռ临�Ӷ�(����ռ�)��O��1�����ȶ���:����������֮�����λ�ò��䣬�ȶ��Ժ�
//void selectsort(int a[],int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		int min = i; bool flag=0;
//		for (int j = i + 1; j < num; j++)
//		{
//			if (a[min] > a[j])
//			{
//				min = j;
//				flag = 1;
//			}
//		}
//		if(flag)
//		swap(a[i], a[min]);
//	}
//}//ʱ�临�Ӷ�O��n^2�����ռ临�Ӷȣ�O��1�����ȶ��ԣ����ȶ�
//void insertsort(int a[], int num)
//{
//	for (int j = 1; j < num; j++)
//	{
//		if (a[j] > a[j - 1])
//		{
//			continue;
//		}
//		else
//		{
//			int tempory = a[j];
//			for (int i = 0; i<j; i++)
//			{
//				if (tempory > a[i])
//				{
//					continue;
//				}
//				else
//				{
//					for (int s = j; s > i; s--)
//					{
//						a[s] = a[s - 1];
//
//					}
//					a[i] = tempory;
//					break;//break��������Ϊ�����ڵ�һ��ѭ����switch
//				}
//			}
//		}
//	}
//}//ʱ�临�Ӷ�O��n^2�����ռ临�Ӷ�O(1),�ȶ��ԣ��ã�
//void shellinsert(int a[], int start, int gap)
//{
//	for (int j = start+gap; j < num; j+=gap)
//	{
//		if (a[j] > a[j - gap])
//		{
//			continue;
//		}
//		else
//		{
//			int tempory = a[j];
//			for (int i = start; i < j; i+=gap)
//			{
//				if (tempory > a[i])
//				{
//					continue;
//				}
//				else
//				{
//					for (int s = j; s > i; s-=gap)
//					{
//						a[s] = a[s - gap];
//
//					}
//					a[i] = tempory;
//					break;//break��������Ϊ�����ڵ�һ��ѭ����switch
//				}
//			}
//		}
//	}
//}
//void  shellsort(int a[], int num)
//{
//	for (int gap = num / 2; gap >= 1; gap /= 2)
//	{
//		for (int i = 0; i < gap; i++)
//		{
//			shellinsert(a, i, gap);
//		}
//	}
//}//ʱ�临�Ӷ�O��n^1.5)�ռ临�Ӷ�O��1���ȶ��ԣ����ã�
//void countsort(int a[],int num)
//{
//	int tem[20] = {0};
//	for (int i = 0; i < num; i++)
//	{
//		tem[a[i]]++;
//	}
//	for (int i = 0,j=0; i < 20&&j<num; i++)
//	{
//		while (tem[i] > 0)
//		{
//			a[j] = i;
//			tem[i]--;
//			j++;
//		}
//	}
//}
//vector<int> count = { 0 };
//void bucketsort(int a[], int num)//��Ͱװ�룬�ֱ�����
//{
//
//}
//void buildmaxheap(int a[],int start, int end)
//{int cur = start;
//	for (int i = 2*cur+1; i < end;cur=i,i=2*cur+1)
//	{
//		if (i<end && a[i + 1]>a[i])i++;
//		if (a[start] < a[i]) swap(a[i], a[start]);
//		else break;
//	}
//}
//void heapsort(int a[], int num)//ʱ�临�Ӷ�o��nlogn���ռ临�Ӷ�o(1)�ȶ��ԣ����ã�
//{
//	for (int i = num / 2 - 1; i >= 0; i--)
//	{
//		buildmaxheap(a, i, num - 1);
//	}
//	for (int i = num - 1; i > 0; i--)
//	{
//		swap(a[i], a[0]);
//		buildmaxheap(a, 0, i - 1);
//	}
//}
//int main()
//{
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> a[i];
//	}
//heapsort(a, num);
//	for (int i = 0; i < num; i++)
//	{
//		cout << a[i] << endl;
//	}
//	return 0;
//}