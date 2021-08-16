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
	void addContact(int indexOfContact)
	{
		index = indexOfContact;
		cout << "Put first name: ";
		cin >> firstName;
		cout << "Put last name: ";
		cin >> lastName;
		cout << "Put nickname: ";
		cin >> nickName;
		cout << "Put phone number: ";
		cin >> phoneNumber;
		cout << "Put darkest secret: ";
		cin >> darkestSecret;
		cout << "Contact added" << endl;
	}
	void printContact()
	{
		cout << "First name: " << firstName << endl;
		cout << "Last name: " << lastName << endl;
		cout << "Nickname: " << nickName << endl;
		cout << "Phone number: " << phoneNumber << endl;
		cout << "Darkest secret: " << darkestSecret << endl;
	}
	void printTable()
	{
		cout << std::right << std::setw(10) << index << "|";
		cout << std::right << std::setw(10) << checkLength(firstName) << "|";
		cout << std::right << std::setw(10) << checkLength(lastName) << "|";
		cout << std::right << std::setw(10) << checkLength(nickName) << "|\n";
	}
};

