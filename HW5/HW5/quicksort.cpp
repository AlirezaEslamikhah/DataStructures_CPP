//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//
//
//int partition(int a[], int lower, int higher)
//{
//	int c = lower - 1;
//	int r = lower + rand() % (higher - lower);
//	int tmp;
//	tmp = a[r];
//	a[r] = a[higher];
//	a[higher] = tmp;
//	int result = a[higher];
//	for (int j = lower; j <= higher -1; j++)
//	{
//		if (a[j] <= result )
//		{
//			c++;
//			swap(a[c], a[j]);	
//		}
//	}
//	swap(a[c + 1], a[higher]);
//	return (c + 1);
//}
//
//
//void quicksort(int a[], int lower, int higher)
//{
//	if (lower < higher)
//	{
//		int pivot = partition(a, lower, higher);
//		quicksort(a, lower, pivot-1);
//		quicksort(a, pivot+1, higher);
//	}
//}
//
//
//int main()
//{
//	int a[] = { 91, 8, 13, -86, -26, 41, 95, 63, 76, -72, 85, -20, 100, 21, 31, -62, -42, 43, -71, -7 };
//	int n = (sizeof(a) / sizeof(int));
//	quicksort(a, 0, n - 1);
//	for (int i = 0; i < n; i++)
//	{
//		cout <<a[i]<<endl;
//	}
//}