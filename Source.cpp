#include "BS.h"
#include <iostream>
using namespace std;


int main() {
	
	BS b1;
	BS h1;
	string name, address, manager;
	int id;
	float balance;
	char choice;
	while (true)
	{
		cout << "*********************************************" << endl;
		cout << "Enter (1) to add new branch \nEnter (2) to display all branches \nEnter (3) to delete existing branch \nEnter (4) to search for a branch by id \n";   cout << "*********************************************" << endl; 
		cout << "*********************************************" << endl;
		cout << "Enter (5) to add new holder \nEnter (6) to display all holders data \nEnter (7) to delete existing holder \nEnter (8) to search for a holder by Name \nEnter (9) to Exit \n";   cout << "*********************************************" << endl;   cout << "Your Choice:";

		cin >> choice;
		///////////////


		switch (choice)
		{
		case '1':
		
		{
			cout << "please Enter branch ID" << endl;
			cin >> id;
			cout << "please Enter branch name" << endl;
			cin >> name;
			cout << "please Enter branch manager" << endl;
			cin >> manager;
			b1.insert(id, name, manager);

		}
		break;
		case '2':
	
		{
			b1.display();
		}
		break;
		case '3':
		
		{ cout << "Enter the id of brach that you want to delet" << endl;
		cin >> id;
		b1.remove(id);
		}
		break;
	
		case '4':
		{
			cout << "Enter branch ID" << endl;
			cin >> id;
			b1.search(id);
		}
		break;
		case '5':
		{
			cout << "please Enter holder ID" << endl;
			cin >> id;
			cout << "please Enter holder name" << endl;
			cin >> name;
			cout << "please Enter holder address" << endl;
			cin >> address;
			cout << "please Enter holder balance" << endl;
			cin >> balance;
			h1.add(id, name, address,balance);
		}
		break;
		case '6':

		{
			h1.print();
		}
		break;
		case '7':

		{ cout << "Enter the name of holder that you want to delet" << endl;
		cin >> name;
		h1.removeholder(name);
		}
		break;
		case '8':
		{
			cout << "Enter holder name" << endl;
			cin >> name;
			h1.search_info(name);
		}
		break;
		case'9':
		
			exit(0);
			break;

		}
		
	}
	system("cls");
	system("pause");
	return 0;
}