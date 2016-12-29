#include "list.h"
void List::operator()(int i)
{
	List *ptr1, *ptr2;
	int k = 0;
	if (head == NULL)
		return;
	if ((head)->next == NULL) {
		free(head);
		head = NULL;
		return;
	}
	ptr1 = head;
	ptr2 = (head)->next;
	if (i == 0)
	{
		head = head->next;
		delete ptr1;
	}
	else
	{
		while (k != i)
		{
			ptr1 = ptr2;
			ptr2 = ptr2->next;
			k++;
		}
		ptr1->next = ptr2->head;
		delete ptr2;
	}
}

void List::operator()(int val, int index)
{
	if (!head)
	{
		head = new List();
		head->next = NULL;
		head->value = val;
	}
	else
	{
		if (index < 0)
		{
			List * q = head;
			if (q->next == NULL)
			{
				q->next = new List();
				q->next->next = NULL;
				q->next->value = val;
			}
			else
			{
				while (q->next != NULL)
				{
					q = q->next;
				};
				q->next = new List();
				q->next->next = NULL;
				q->next->value = val;
			}
		}
	}
	if (index == 0)
	{
		List *q = new List();
		q->value = val;
		q->next = head;
		head = q;
	}
	if (index > 0)
	{
		List *ptr1, *ptr2;
		ptr1 = head;
		ptr2 = new List();
		for (int i = 1; i < index; i++)
			ptr1 = ptr1->next;
		ptr2->value = val;
		ptr2->next = ptr1->next;
		ptr1->next = ptr2;
	}
}
void List::operator()(char* val, int index)
{
	if (index < 0)
	{
		if (!head)
		{
			head = new List();
			head->next = NULL;
			head->data = val;
			head->value = 0;

		}
		else
		{
			List * q = head;
			if (q->next == NULL)
			{
				q->next = new List();
				q->next->next = NULL;
				q->next->data = val;
				q->next->value = 0;
			}
			else
			{
				while (q->next != NULL)
				{
					q = q->next;
				};
				q->next = new List();
				q->next->next = NULL;
				q->next->data = val;
				q->next->value = 0;
			}
		}
	}
	else
	{
		List * tf = this->head;
		for (int i = 1; i < index && tf->next; ++i)
			tf = tf->next;
		List * temp = new List();
		temp->data = val;
		temp->value = 0;
		temp->next = tf->next;
		tf->next = temp;
	}
}
void List::show()
{
	List *q = head;
	cout << "List : ";
	while (q)
	{
		if (q->value == 0)
			cout << q->data << " ";
		else
			cout << q->value << " ";
		q = q->next;
	}
	cout << endl;
}
