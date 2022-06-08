#include<stdio.h>
#include<iostream>
#include <algorithm>  
#include<vector>
using namespace std;
int count_r(const vector<int>& b, int low, int high, int major)
{
	int c = 0;
	for (int i = low; i <= high; i++)
	{
		if (b[i] == major)
		{
			c++;
		}
	}
	return c;
}
int major_comparer(int lc, int rc, int right, int left,int l,int h)
{
	if (left > right)
	{
		if (lc > (h - l + 1) / 2)
		{
			return left;
		}
		else
		{
			return -1;
		}
	}
	else if(left == right || (left >0 && right > 0) )
	{

		if (lc > (h - l + 1) / 2)
		{
			return left;
		}
		else if (rc > (h - l + 1) / 2)
		{
			return right;
		}
		else
		{
			return -1;
		}
	}
	else if (right > left)
	{
		if (rc > (h - l + 1) / 2)
		{
			return right;
		}
		else
		{
			return -1;
		}

	}

}
int problem(vector<int> &a, int l, int h)
{
	if (l > h)
	{
		return -1;
	}
	if (l == h)
	{
		return a[l];
	}
	int mid = l + (h - l) / 2 ;
	int left = problem(a, l, mid);
	int right = problem(a, mid + 1, h);
	if (left == right)
	{
		return left;
	}
	unsigned int lc = count_r(a, l, h, left);
	unsigned int rc = count_r(a, l, h, right);
	int result = major_comparer(lc, rc, right, left,l,h);
	return result;
}

int main()
{
	vector<int>a(9);
	a = { 3, 3, 4, 2, 4, 4, 2, 4, 4 };
	cout << problem(a, 0, 8) << endl;
}