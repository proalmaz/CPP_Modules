#include "crappyPhoneBook.h"

void Contact::addContact(int indexOfContact)
{
	index = indexOfContact;
	cout << "Put first name: ";
	std::getline(cin, firstName);
	cout << "Put last name: ";
	std::getline(cin, lastName);
	cout << "Put nickname: ";
	std::getline(cin, nickName);
	cout << "Put phone number: ";
	std::getline(cin, phoneNumber);
	cout << "Put darkest secret: ";
	std::getline(cin, darkestSecret);
	cout << "Contact added" << endl;
}

void Contact::printContact()
{
	cout << "First name: " << firstName << endl;
	cout << "Last name: " << lastName << endl;
	cout << "Nickname: " << nickName << endl;
	cout << "Phone number: " << phoneNumber << endl;
	cout << "Darkest secret: " << darkestSecret << endl;
}

void Contact::printTable()
{
	cout << std::right << std::setw(10) << index << "|";
	cout << std::right << std::setw(10) << checkLength(firstName) << "|";
	cout << std::right << std::setw(10) << checkLength(lastName) << "|";
	cout << std::right << std::setw(10) << checkLength(nickName) << "|\n";
}