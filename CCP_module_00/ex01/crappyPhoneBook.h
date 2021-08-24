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
private:
	int 	index;
	string	firstName;
	string	lastName;
	string	nickName;
	string	phoneNumber;
	string	darkestSecret;
public:
	void	addContact(int indexOfContact);
	void	printContact();
	void	printTable();
	void	setFirstName(string str) { firstName = str; }
	void	setLastName(string str) { lastName = str; }
	void 	setNickName(string str) { nickName = str; }
	void	setPhoneNumber(string str) { phoneNumber = str; }
	void	setDarkestSecret(string str) { darkestSecret = str; }
	string	getFirstName() { return firstName; }
	string	getLastName() { return lastName; }
	string	getNickName() { return nickName; }
	string	getPhoneNumber() { return phoneNumber; }
	string	getDarkestSecret() { return darkestSecret; }
};

class Phonebook
{
	Contact *m_array;
public:
	void setPhonebook(Contact *array) { m_array = array; }
	Contact *getPhonebook() { return m_array; }
};

