//#include <iostream>
//using namespace std;
//
//class node 
//{
//public:
//    int data;
//    node* next;
//};
//
//class QUESTION5
//{
//public:
//    node* top = NULL;
//    int size = 0;
//    bool is_empty = true;
//	int peek = 0;
//    void push(int a)
//    {
//        node* nn = new node();
//        nn->data = a;
//        nn->next = top;
//        top = nn;
//        size++;
//        is_empty = false;
//		if (a > peek)
//		{
//			peek = a;
//		}
//    }
//    int pop() 
//    {
//		int r = top->data;
//
//        if (top != NULL )
//        {
//            top = top->next;
//			size--;
//			if (size == 0)
//			{
//				is_empty = true;
//			}
//        }
//		return r;
//    }
//
//};
//
//
//
//
//int main() 
//{
//	QUESTION5 q1;
//	q1.push(4);
//	q1.push(9);
//	int p0 = q1.peek;
//	q1.push(7);
//	int p1 = q1.pop();
//	int p2 = q1.peek;
//	int s = q1.size;
//	int p3 = q1.pop();
//	bool e = q1.is_empty;
//	int p4 = q1.pop();
//	bool e2 = q1.is_empty;
//	cout << p0 << endl;
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cout << s << endl;
//	cout << p3 << endl;
//	if (e == true)
//	{
//		cout << "bale" << endl;
//	}
//	else
//	{
//		cout << "kheir" << endl;
//	}
//	cout << p4 << endl;
//	if (e2 == true)
//	{
//		cout << "bale" << endl;
//	}
//	else
//	{
//		cout << "kheir" << endl;
//	}
//	return 0;
//    
//}