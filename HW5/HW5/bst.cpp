//#include <iostream> 
//using namespace std;
//#include <vector>
//
//
//class node
//{
//public:
//	node(int key, node* parent, node* right, node* left)
//	{
//		this->key = key;
//		this->left = left;
//		this->parent = parent;
//		this->right = right;
//	}
//	node(){}
//	int key;
//	node* parent;
//	node* right;
//	node* left;
//};
//vector<node*> v;
//
//class bst
//{
//public:
//	node* insert(node* root, node* z)
//	{
//		v.push_back(z);
//		node* y = NULL;
//		node* x = root;
//		while (x != NULL)
//		{
//			y = x;
//			if (z->key < x->key)
//			{
//				x = x->left;
//			}
//			else
//			{
//				x = x->right;
//			}
//		}
//		z->parent = y;
//		if (y == NULL)
//		{
//			root = z;
//			v.push_back(z);
//			return root;
//		}
//		else if(z->key < y->key)
//		{
//			y->left = z;
//		}
//		else
//		{
//			y->right = z;
//		}
//
//		return root;
//	}
//	void inorder(node* root)
//	{
//		if (root != NULL)
//		{
//			inorder(root->left);
//			cout << root->key << endl;
//			inorder(root->right);
//		}
//	}
//	void tmin(node* root)
//	{
//		while (root->left != NULL)
//		{
//			root = root->left;
//		}
//		cout << root->key << endl;
//	}
//	int tmin2(node* root)
//	{
//		while (root->left != NULL)
//		{
//			root = root->left;
//		}
//		return root->key;
//	}
//	node* tmin3(node* root)
//	{
//		while (root->left != NULL)
//		{
//			root = root->left;
//		}
//		return root;
//	}
//	void tmax(node* root)
//	{
//		while (root->right != NULL)
//		{
//			root = root->right;
//		}
//		cout << root->key << endl;
//	}
//	int tmax2(node* root)
//	{
//		while (root->right != NULL)
//		{
//			root = root->right;
//		}
//		return root->key;
//	}
//	node* succesor(node* x)
//	{
//		if (x->right != NULL)
//		{
//			int a = tmin2(x->right);
//			return new node(a,NULL,NULL,NULL);
//		}
//		node* y = x->parent;
//		while (y != NULL && x == y->right)
//		{
//			x = y;
//			y = y->parent;
//		}
//		return y;
//	}
//	node* predeccor(node* x)
//	{
//		if (x->left != NULL)
//		{
//			int a = tmax2(x->left);
//			return new node(a, NULL, NULL, NULL);
//		}
//		node* y = x->parent;
//		while (y != NULL && x == y->left)
//		{
//			x = y;
//			y = y->parent;
//		}
//		return y;
//	}
//	node* search(node* x, int k)
//	{
//		if ((x==NULL)||(x->key == NULL) || (k == x->key))
//		{
//			return x;
//		}
//		if (k<x->key)
//		{
//			return search(x->left, k);
//		}
//		else
//		{
//			return search(x->right, k);
//		}
//	}
//	void transplant(node* t, node* u, node* v)
//	{
//		if (u->parent == NULL)
//		{
//			t = v;
//		}
//		else if (u == u->parent->left)
//		{
//			u->parent->left = v;
//		}
//		else
//		{
//			u->parent->right = v;
//		}
//		if (v!= NULL)
//		{
//			v->parent = u->parent;
//		}
//	}
//	void deletee(node* root, node* x)
//	{
//		if (x->left == NULL)
//		{
//			transplant(root, x, x->right);
//		}
//		else if (x->right == NULL)
//		{
//			transplant(root, x, x->left);
//		}
//		else
//		{
//			node* y = tmin3(x->right);
//			if (y->parent != x)
//			{
//				transplant(root, y, y->right);
//				y->right = x->right;
//				y->right->parent = y;
//			}
//			transplant(root, x, y);
//			y->left = x->left;
//			y->left->parent = y;
//		}
//	}
//	
//};
//
//
//
//
//
//
//int main()
//{
//	bst a;
//	node* root = NULL;
//	root = a.insert(root, new node(15, NULL, NULL, NULL));
//	a.insert(root, new node(24, NULL, NULL, NULL));
//	a.insert(root, new node(5, NULL, NULL, NULL));
//	a.insert(root, new node(7, NULL, NULL, NULL));
//	a.insert(root, new node(1, NULL, NULL, NULL));
//	a.insert(root, new node(13, NULL, NULL, NULL));
//	a.insert(root, new node(27, NULL, NULL, NULL));
//	a.insert(root, new node(18, NULL, NULL, NULL));
//	a.insert(root, new node(19, NULL, NULL, NULL));
//	a.inorder(root);
//	cout << "the max is "; a.tmax(root);
//	cout << "the min is "; a.tmin(root);
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i]->key == 13 )
//		{
//			auto s = a.succesor(v[i]);
//			cout << "the next node after 13 is ";cout<< s->key;
//			cout << " " << endl;
//		}
//		if (v[i]->key == 19)
//		{
//			auto s = a.succesor(v[i]);
//			cout << "the next node after 19 is "; cout << s->key;
//			cout << " " << endl;
//
//		}
//	}   
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i]->key == 13)
//		{
//			auto s = a.predeccor(v[i]);
//			cout << "the previous node before 13 is "; cout << s->key;
//			cout << " " << endl;
//		}
//		if (v[i]->key == 19)
//		{
//			auto s = a.predeccor(v[i]);
//			cout << "the previous node before 19 is "; cout << s->key;
//			cout << " " << endl;
//		}
//	}
//	node* sr = a.search(root, 27);
//	if (sr ==NULL )
//	{
//		cout << "not found";
//		cout << " " << endl;
//
//	}
//	else
//	{
//		cout << "found";
//		cout << " " << endl;
//
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i]->key == 24)
//		{
//			a.deletee(root,v[i]);
//			a.inorder(root);
//		}
//	}
//	return 0;
//}
//
// // بر اساس این حلقه فور میتوانیم عتصر اینپوت برای پیدا کردن عنصر بعدی را بیابیم. و برعکس آن میتوانیم بر اساس حلقه فور عنصر قبلی را بیابیم. و هم
// //و همچنین میتوان با همین حلقه برای دلیت کردن اقدام کنیم