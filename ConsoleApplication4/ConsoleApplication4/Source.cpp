#include <iostream>
using namespace std;

class QUESTION2
{
public:
	int q[50];
	int size = 0;
	bool is_empty = true;
	int jolo = -1;
	int aghab = -1;
	int n = 50;
	void enqueue(int a)
	{
		if (aghab != n-1)
		{
			is_empty = false;
			aghab++;
			if (jolo == -1)
			{
				jolo = 0;
			}
			q[aghab] = a;
			size++;
		}
	}
	int dequeue()
	{
		int result = 0;
		if ( !(jolo == -1 || jolo > aghab ))
		{
			result = q[jolo];
			jolo++;
			size--;
			if (size == 0)
			{
				is_empty = true;
			}

		}
		return result;
	}

};


int main()
{
	QUESTION2 q2;
	q2.enqueue(4);
	q2.enqueue(9);
	int d0 = q2.dequeue();
	q2.enqueue(7);
	int dd = q2.dequeue();
	int s0 = q2.size;
	bool e0 = q2.is_empty;
	int d1 = q2.dequeue();
	bool e1 = q2.is_empty;
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