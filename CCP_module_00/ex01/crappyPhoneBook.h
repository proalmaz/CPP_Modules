#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string checkLength(string str);

class Contact
{
	int 	index;
	string	firstName;
	string	lastName;
	string	nickName;
	string	phoneNumber;
	string	darkestSecret;
public:
	void addContact(int indexOfContact);
	void printContact();
	void printTable();
};

