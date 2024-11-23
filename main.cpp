#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int value;
	node* next;
	node()
	{
		value = 0;
		next = NULL;
	}

	node(int x)
	{
		value = x;
		next = NULL;
	}
};


class linkedlist
{
	node* head;
public:
	linkedlist()
	{
		head = NULL;
	}

	bool isEmpty()
	{
		if (head == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void addfirst(int x)
	{
		node* n = new node(x);
		if (isEmpty() == true)
		{
			head = n;
		}
		else
		{
			n->next = head;
			head = n;
		}
	}

	int removefirst()
	{
		if (isEmpty() == false)
		{
			node* c = head;
			head = head->next;
			c->next = NULL;
			int z = c->value;
			delete c;
			return z;
		}
	}

	void print()
	{
		if (isEmpty() == false)
		{
			node* c = head;
			while (c != NULL)
			{
				cout << c->value;
				c = c->next;
			}
		}
	}

	void addlast( int x )
	{
		node* n = new node(x);
		if ( isEmpty() == true)
		{
			head = n;
		}
		else
		{
			node* c = head ;
			while (c->next != NULL)
			{
				c = c->next;
			}
			c->next = n;
		}
	}
	int removelast()
	{
		if (isEmpty() == false)
		{
			node* c = head;
			while (c->next->next != NULL)
			{
				c = c->next;
			}

			node* cc = c->next;
			int x = cc->value;
			delete cc;
			return x;
		}
	}
};

int main()
{
	linkedlist ali ;
	ali.addfirst(1);
	ali.addlast(2);
	ali.addlast(3);

	ali.print();

}
