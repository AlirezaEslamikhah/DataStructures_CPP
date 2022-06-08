#include <iostream>
#include <vector>
using namespace std;

struct node
{
public:
	int data;
	node* next;
	bool is_tail = false;
	bool is_head = false;
	int index;
};

class linked_list
{
public:
	int size = 0;
	bool is_empty = true;
	node* head;
	int index = 0;
	void list_insert_in(int key, int index)
	{
		if (size == 0)
		{
			node* newNode = new node();
			newNode->data = key;
			newNode->index = index;
			newNode->next = head;
			head = newNode;
			size++;
			index++;
			return;
		}
		node* newNode = new node();
		newNode->data = key;
		newNode->index = index;
		size++; index++;
		node* temp = head;
		for (int i = 2; i < index; i++)
		{
			if (temp->next != NULL) {
				temp = temp->next;
			}
		}
		newNode->next = temp->next;
		temp->next = newNode;
		
	}
	void list_delete_in(int index)
	{
		node* n = head;

		for (int i = 0; i < 100; i++)
		{
			if (n->next->index == index )
			{
				if (n->next != NULL)
				{
					n->next = n->next->next;
					for (int j = i; j < size; j++)
					{
						n->index++;
						n->next;
					}
					return;
				}
				n = n->next;
			}
			n = n->next;
			
		}
	}
	void list_swap_nodes(int index1, int index2)
	{
		node* tmp1 = new node();
		node* tmp2 = new node();
		node* h = head;
		node* h1 = head;
		for (int i = 0;  i < 100;  i++)
		{
			if (h->index == index1)
			{
				tmp1 = h;
				break;
			}
			h = h->next;
		}
		for (int i = 0; i < 100; i++)
		{
			if (h1->index == index1)
			{
				tmp2 = h1;
				h1= tmp1;
				break;
			}
			h1 = h1->next;
		}
		h = tmp2;

	}
	int list_search(int key)
	{
		vector<int> a;
		int index = 0;
		node* h = head;
		while (h->next != NULL)
		{
			if (h->data == key)
			{
				a.push_back(index );
				//return index+1;
			}
			h = h->next;
			index++;
		}
		if (a.size() == 0) {
			cout << "-1";
			return -1;
		}
		for (int i = 0; i < a.size();  i++)
		{
			cout << a[i]<<"  ";
		}
	}


};

int main()
{
	linked_list l;
	l.list_insert_in(1, 0);
	l.list_insert_in(42, 1);
	l.list_insert_in(123, 2);
	l.list_insert_in(111, 3);
	l.list_insert_in(22, 4);
	l.list_search(123);
	l.list_delete_in(3);
	l.list_search(111);
	l.list_swap_nodes(0, 1);
	return 0;
}