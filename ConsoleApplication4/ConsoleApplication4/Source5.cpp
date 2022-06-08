#include <iostream>
using namespace std;


class PhoneBook
{
public:
	string hash_table [9999];
	int number_hash(int a)
	{
		int result = 0;
		hash<int> h;
		result = h(a);
		return result;
	}
	void add(string a , int b)
	{
		int hash_number = 0;
		hash_number = number_hash(b);
		hash_number = hash_number % 1000;
		if (hash_number<0)
		{
			hash_number = abs(hash_number);
		}
		if (hash_table[hash_number].size() == 0)
		{
			hash_table[hash_number] = a;
		}
		else
		{
			cout << hash_table[hash_number] << endl;
		}
	}
	void del(int b)
	{
		int hash_number = number_hash(b);
		hash_number = hash_number % 1000;
		if (hash_number < 0)
		{
			hash_number = abs(hash_number);
		}
		hash_table[hash_number] = " ";
	}
	void find(int b)
	{
		int hash_number = number_hash(b);
		hash_number = hash_number % 1000;
		if (hash_number < 0)
		{
			hash_number = abs(hash_number);
		}
		if (hash_table[hash_number].size() == 0)
		{
			cout << "not found" << endl;

		}
		else
		{
			cout << hash_table[hash_number] << endl;

		}
	}
};


int main()
{
	PhoneBook p;
	p.add("ali", 1234567);
	p.add("mohammad", 1235432);
	p.add("zahra", 1236456);
	p.find(1236456);
	p.del(1236456);
	return 0;
}
