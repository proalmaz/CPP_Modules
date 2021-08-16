#include "crappyPhoneBook.h"

string getInput()
{
	string command;
	do
	{
		cout << "'ADD' - add contact; 'SEARCH' - search contact in the phonebook; "
											 "'EXIT'' - exit;" << endl;
		cout << "Enter command: ";
		cin >> command;
	} while (command != "ADD" && command != "SEARCH" && command != "EXIT");
	return command;
}

string checkLength(string str)
{
	if (str.length() > 9)
	{
		str = str.substr(0, 9) + ".";
		return str;
	}
	return str;
}

void printHeaderTable()
{
	cout << std::right << std::setw(10) << "Index" << "|";
	cout << std::right << std::setw(10) << "First Name" << "|";
	cout << std::right << std::setw(10) << "Last Name" << "|";
	cout << std::right << std::setw(10) << "Nickname" << "|" << endl;
}

int main()
{
	Contact array[8];
	int index;

	index = 0;
	string command;
	while (1)
	{
		command = getInput();
		if (command == "EXIT")
			exit(0);
		if (command == "ADD")
		{
			array[index].addContact(1 + index);
			index++;
		}
		if (command == "SEARCH")
		{
			printHeaderTable();
			for (int count = 0; count < index; ++count)
				array[count].printTable();
		}
	}
}