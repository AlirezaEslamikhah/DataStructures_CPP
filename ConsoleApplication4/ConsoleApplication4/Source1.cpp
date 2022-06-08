#include <iostream>
using namespace std;

class stack_custom
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
void stack_custom::push(int a)
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

class QUESTION3
{
public:
	stack_custom s1;
	stack_custom s2;
	int size = 0;
	bool is_empty = true;
	void enqueue(int a)
	{
		size++;
		is_empty = false;
		while (!s1.is_empty) 
		{
			int c = s1.pop();
			s2.push(c);
		}
		s1.push(a);
		while (!s2.is_empty) 
		{
			int c = s2.pop();
			s1.push(c);
		}
	}
	int dequeue()
	{
		int v = s1.pop();
		size--;
		if (size == 0)
		{
			is_empty = true;
		}
		return v;
	}
};





int main()
{
	QUESTION3 q3;
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