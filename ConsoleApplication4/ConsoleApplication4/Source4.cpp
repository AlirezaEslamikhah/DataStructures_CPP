#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
};
class QUESTION5
{
public:
    node* jolo = NULL;
    node* aghab = NULL;
    node* tmp = NULL;
    int size = 0;
    bool is_empty = true;
    int peek = 0;
    void enqueue(int a ) 
    {
        if (aghab == NULL)
        {
            aghab = new node();
            aghab->next = NULL;
            aghab->data = a;
            jolo = aghab;
            size++;
            is_empty = false;
            if (a > peek)
            {
                peek = a;
            }
        }
        else {
            tmp = new node();
            aghab->next = tmp;
            tmp->data = a;
            tmp->next = NULL;
            aghab = tmp;
            size++;
            is_empty = false;
            if (a > peek)
            {
                peek = a;
            }
        }
    }
    int dequeue() 
    {
        int result = 0;
        tmp = jolo;
        if (jolo != NULL && tmp->next != NULL)
        {
            tmp = tmp->next;
            result = jolo->data;
            jolo = tmp;
            size--;
            if (size == 0)
            {
                is_empty = true;
            }
        }
        else
        {
            result = jolo->data;
            jolo = NULL;
            aghab = NULL;
            size--;
            if (size == 0)
            {
                is_empty = true;
            }
        }
        return result;
    }
};





int main() {
    QUESTION5 q3;
    q3.enqueue(4);
    q3.enqueue(9);
    int d0 = q3.dequeue();
    q3.enqueue(7);
    int dd = q3.dequeue();
    int s0 = q3.size;
    bool e0 = q3.is_empty;
    int d1 = q3.dequeue();
    bool e1 = q3.is_empty;
    cout << d0 << endl;
    cout << dd << endl;
    cout << s0 << endl;
    if (e0 == true)
    {
        cout << "bale" << endl;
    }
    else
    {
        cout << "kheir" << endl;
    }
    cout << d1 << endl;
    if (e1 == true)
    {
        cout << "bale" << endl;
    }
    else
    {
        cout << "kheir" << endl;
    }
    return 0;
}















//برای سوال 4 که با استک بود





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