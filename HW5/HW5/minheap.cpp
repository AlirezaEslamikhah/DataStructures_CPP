//#include<iostream>
//#include <vector>
//using namespace std;
//
//
//int capacity = 0;
//int heap_size = 0;
//
//
//class node
//{
//public:
//    int value;
//    int priority;
//};
//node m[100];
//
//
//vector<node*> v;
//
//void minheap(int i)
//{
//    int l = 2 * i +1;
//    int r = 2 * i +2;
//    int smallest = i;
//    if (l < heap_size && m[l].priority < m[i].priority)
//        smallest = l;
//    if (r < heap_size && m[r].priority < m[smallest].priority)
//        smallest = r;
//    if (smallest != i)
//    {
//        swap(m[i], m[smallest]);
//        minheap(smallest);
//    }
//}
//int deletion()
//{
//    if (heap_size <= 0)
//		return 0 ;
//	if (heap_size == 1)
//	{
//		heap_size--;
//		return m[0].value;
//	}
//	node root = m[0];
//	m[0] = m[heap_size - 1];
//	heap_size--;
//	minheap(0);
//
//	return root.value;
//}
//int peek()
//{
//    if (heap_size <= 0)
//        return 0 ;
//    if (heap_size == 1)
//    {
//        heap_size--;
//        return m[0].value;
//    }
//    node root = m[0];
//    m[0] = m[heap_size - 1];
//    return root.value;
//}
//void insertion(node a)
//{
//    if (heap_size == capacity)
//    {
//        return;
//    }
//    v.push_back(&a);
//    heap_size++;
//    int i = heap_size - 1;
//    m[i] = a;
//    while (i != 0 && m[(i-1)/2].priority > m[i].priority)
//    {
//        swap(m[i], m[(i - 1) / 2]);
//        i = (i - 1) / 2;
//    }
//}
//
//void print(int a[],int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << m[i].value + "  ";
//    }
//}
//int main()
//{
//	int a[] = { 15, 24, 5, 7, 1, 13, 27, 18, 19 };
//    int p[] = { 1,2,3,4,5,6,7,8,9 };// prorities
//	int n = (sizeof(a) / sizeof(int));
//    capacity = n;
//	for (int i = 0;  i < n;  i++)
//	{
//        node s; s.priority = p[i]; s.value = a[i];
//		insertion(s);
//	}
//    print(a,n);
//    cout << deletion();
//    cout << peek();
//}