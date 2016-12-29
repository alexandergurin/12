#pragma once
#include <iostream>
using namespace std;
class List
{
private:
	double value;
	char *data;
	List *head;
	List *next;
public:
	List()
	{
		head = NULL;
		next = NULL;
		value = 0;
		data = "";
	}
	void operator () (int i);
	void operator () (int val, int index);
	void operator () (char* val, int index);
	friend bool operator != (List &a, List &b)
	{
		List *temp1 = a.head;
		List *temp2 = b.head;
		while ((temp1) || (temp2))
		{
			if (temp1 == NULL) return false;
			if (temp2 == NULL) return false;
			if (temp1->value == temp2->value)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
	void show();
};