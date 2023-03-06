#pragma once
#include<iostream>
#include<string>

using namespace std;
struct branch
{
	int id;
	string name;
	string manager;
	branch * next;
};

///////////////////////////
struct holder
{
	int id;
	string name;
	string address;
	float balance;
	holder* next;
};

class BS
{
private:
	branch* head = NULL;
	holder* front = NULL;
public:
	BS();
	void insert(int i, string n, string m);
	void display();
	void remove(int d);
	void search(int idd);
	////////////////////////////
	void add(int i, string n, string a, float b);
	void print();
	void search_info(string n);
	void removeholder(string n);

	~BS();
};

