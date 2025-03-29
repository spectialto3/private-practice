//#include<iostream>
//#include<vector>
//using namespace std;
//int a[1001];
//int num;
//void bubblesort(int a[],int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		bool flag = true;//冒泡排序的优化
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
//}//时间复杂度O（n^2）、空间复杂度(额外空间)：O（1）、稳定性:两个数排序之后相对位置不变，稳定性好
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
//}//时间复杂度O（n^2），空间复杂度：O（1），稳定性：不稳定
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
//					break;//break的作用域为他所在的一层循环或switch
//				}
//			}
//		}
//	}
//}//时间复杂度O（n^2），空间复杂度O(1),稳定性（好）
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
//					break;//break的作用域为他所在的一层循环或switch
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
//}//时间复杂度O（n^1.5)空间复杂度O（1）稳定性（不好）
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
//void bucketsort(int a[], int num)//分桶装入，分别排序
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
//void heapsort(int a[], int num)//时间复杂度o（nlogn）空间复杂度o(1)稳定性（不好）
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