#include "BS.h"

BS::BS()
{
}

void BS::insert(int i, string n, string m)
{
	branch * newbranch = new branch;
	newbranch->id = i;
	newbranch->name = n;
	newbranch->manager = m;
	newbranch->next = NULL;
	//------------
	if (head == NULL)
	{
		head = newbranch;
	}
	else
	{
		branch * temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newbranch;
	}
}

void BS::display()
{
	branch* temp = head;
	while (temp != NULL)
	{
		cout << "{" << endl;
		cout << "Branch Name : " << temp->name << endl;
		cout << "Branch Manager : " << temp->manager << endl;
		cout << "Branch ID : " << temp->id << endl;
		cout << "}" << endl;
		cout << endl;

		temp = temp->next;
	}
}

void BS::remove(int d)
{
	branch* temp = head;
	branch* prev = head;
	if (temp->id == d)
	{
		head = temp->next;
		delete temp;
		return;
	}
	while (temp != NULL && temp->id != d)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return;
	else
	{
		prev->next = temp->next;
		delete temp;
	}
}

void BS::search(int idd)
{
	branch* temp = head;
	while (temp != NULL)
	{
		if (temp->id == idd)
		{
			cout << "{" << endl;
			cout << "Branch Name : " << temp->name << endl;
			cout << "Branch Manager : " << temp->manager << endl;
			cout << "Branch ID : " << temp->id << endl;
			cout << "}" << endl;
			cout << endl;

		}

		temp = temp->next;
	}
}

void BS::add(int i, string n, string a, float b)
{
	holder * newholder = new holder;
	newholder->id = i;
	newholder->name = n;
	newholder->balance = b;
	newholder->address = a;
	newholder->next = NULL;
	//------------
	if (front == NULL)
	{
		front = newholder;
	}
	else
	{
		holder * temp = front;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newholder;
	}
}

void BS::print()
{
	holder* temp = front;
	while (temp != NULL)
	{
		cout << "{";
		cout << "Holder Name : " << temp->name << endl;
		cout << "Holder Address : " << temp->address << endl;
		cout << "Holder ID : " << temp->id << endl;
		cout << "Holder Balanced : " << temp->balance;
		cout << "  }" << endl;
		cout << endl;

		temp = temp->next;
	}
}

void BS::search_info(string n)
{
	holder* temp = front;
	while (temp != NULL)
	{
		if (temp->name == n)
		{
			cout << "{" << endl;
			cout << "Holder Name : " << temp->name << endl;
			cout << "Holder Address : " << temp->address << endl;
			cout << "Branch ID : " << temp->id << endl;
			cout << "Branch Balance : " << temp->balance << endl;

			cout << "}" << endl;
			cout << endl;
		}

		temp = temp->next;
	}
}

void BS::removeholder(string n)
{
	holder* temp = front;
	holder* prev = front;
	if (temp->name == n)
	{
		front = temp->next;
		delete temp;
		return;
	}
	while (temp != NULL && temp->name != n)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return;
	else
	{
		prev->next = temp->next;
		delete temp;
	}
}


BS::~BS()
{
}
