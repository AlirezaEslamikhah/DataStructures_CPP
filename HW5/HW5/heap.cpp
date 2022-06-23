//#include <iostream> 
////#include <bits/stdc++.h>
//using namespace std;
//#include <vector>
//
//
//int heap_size = 0;
//void max_heap(int a[],int n, int i)
//{
//	int l = (2 * i )+1;
//	int r = (2 * i) + 2;
//	int largest = i;
//	if (l < n /*sizeof(a)*/ && a[l] > a[largest])
//	{
//		largest = l;
//	}
//	if (r < n /*sizeof(a)*/ && a[r] > a[largest])
//	{
//		largest = r;
//
//	}
//	if(largest != i)
//	{
//		//swap(a, a[i], a[largest]);
//		int temp; 
//		temp = a[i];
//		a[i] = a[largest];
//		a[largest] = temp;
//		max_heap(a,n, largest);
//	}
//}
//
//
//
//
//void build_max_heap(int a[])
//{
//	heap_size = sizeof(a)/sizeof(int);
//	for (int i = (sizeof(a) / sizeof(int)) -1 ; i >= 0; i--)
//	{
//		//max_heap(a, i);
//	}
//}
//void heapsort(int a[],int n)
//{
//	//build_max_heap(a);
//	for (int i = n/2 - 1; i >= 0; i--)
//		max_heap(a,n,i);
//	for (int i = n -1 ; i >= 0; i--)
//	{
//		int temp;
//		temp = a[i];
//		a[i] = a[0];
//		a[0] = temp;
//		heap_size--;
//		max_heap(a,i, 0);
//	}
//}
//
//int main()
//{
//	int a[] = { 15, 24, 5, 7, 1, 13, 27, 18, 19 };
//	//build_max_heap(a);
//	int n = (sizeof(a) / sizeof(int));
//	heapsort(a,n);
//	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		cout << a[i] << endl;
//	}
//	cout << "the height is  "; cout << ceil(log2(n))<<endl;
//}