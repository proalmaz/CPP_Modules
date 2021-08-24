#include "crappyPhoneBook.h"

static string getInput()
{
	string command;
	do
	{
		cout << "'ADD' - add contact; 'SEARCH' - search contact in the phonebook; "
											 "'EXIT' - exit;" << endl;
		cout << "Enter command: ";
		std::getline(cin, command);
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

static void printHeaderTable()
{
	cout << std::right << std::setw(10) << "Index" << "|";
	cout << std::right << std::setw(10) << "First Name" << "|";
	cout << std::right << std::setw(10) << "Last Name" << "|";
	cout << std::right << std::setw(10) << "Nickname" << "|" << endl;
}

static bool ft_isdigit(string str)
{
	int i = 0;
	if (!str[i])
		return false;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
		i++;
	}
	return true;
}

static void commandSearch(Contact array[8], int &index, int &maxIndex)
{
	string	input;
	int 	indexForSearch;
	while (1)
	{
		printHeaderTable();
		for (int count = 0; count < maxIndex; ++count)
			array[count].printTable();
		cout << "Enter \"EXIT\" to return to the previous menu...\n";
		cout << "Enter contact index: ";
		std::getline(cin, input);
		if (input == "EXIT")
			break;
		if (ft_isdigit(input))
			indexForSearch = std::atoi(input.c_str()) - 1;
		if (indexForSearch > -1 && indexForSearch < maxIndex)
			array[indexForSearch].printContact();
		else
			cout << "\nInvalid index." << endl;
	}
}

static void commandAdd(Contact array[8], int &index, int &maxIndex)
{
	array[index].addContact(1 + index);
	index++;
	++maxIndex;
}

int main()
{
	Contact array[8];
	Phonebook phonebook;
	int index;
	int maxIndex;

	phonebook.setPhonebook(array);
	index = maxIndex = 0;
	string command;
	while (1)
	{
		if (index == 8)
			index = 0;
		command = getInput();
		if (command == "EXIT")
			exit(0);
		if (command == "ADD")
			commandAdd(array, index, maxIndex);
		if (maxIndex >= 8)
			maxIndex = 8;
		if (command == "SEARCH")
			commandSearch(array, index, maxIndex);
	}
}