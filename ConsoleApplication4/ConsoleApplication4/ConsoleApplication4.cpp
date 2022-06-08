#include <iostream>
using namespace std;

class QUESTION1
{

public:
	int s[50];
	int size = 0;
	bool is_empty = true;
	int peek = 0;
	int top = -1;
	void push(int a);
	
	int pop()
	{
		int v = top;
		if (top > -1)
		{
			top--;
			size--;
			if (size == 0)
			{
				is_empty = true;
			}
			return s[v];
		}
	}
};
void QUESTION1::push(int a)
{
	if (top < 50)
	{
		is_empty = false;
		top++;
		s[top] = a;
		size++;
		if (a > peek)
		{
			peek = a;
		}
	}
}

int main()
{
	QUESTION1 q1;
	q1.push(4);
	q1.push(9);
	int p0 = q1.peek;
	q1.push(7);
	int p1 = q1.pop();
	int p2 = q1.peek;
	int s = q1.size;
	int p3 = q1.pop();
	bool e = q1.is_empty;
	int p4 = q1.pop();
	bool e2 = q1.is_empty;
	cout << p0 << endl;
	cout << p1 << endl;
	cout << p2 << endl;
	cout << s << endl;
	cout << p3 << endl;
	if (e == true)
	{
		cout << "bale" << endl;
	}
	else
	{
		cout << "kheir" << endl;
	}
	cout << p4 << endl;
	if (e2 == true)
	{
		cout << "bale" << endl;
	}
	else
	{
		cout << "kheir" << endl;
	}
	return 0;

}
