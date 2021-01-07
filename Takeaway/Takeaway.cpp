#define _CRT_SECURE_NO_WARNINGS

#include "Menu.h"
//#include "Order.h"
//#include "Item.h"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>


//base class
class Item {
public:
	//Attributes
		std::string name;
		int calories;
		std::string price;

};

class Appestiser : public Item {
public:
	// Consult menu.csv to identify appropriate data types for these attributes
	char shareable;
	char TwoForOne;
};

class MainCourse : public Item {

};

class Beverage : public Item {
public:
	// Consult menu.csv to identify appropriate data types for these attributes
	int abv;
	std::string volume;
};

// needs to be an abstract class ( a class that has atleast one pure virtual function)
class ItemList
{
	// Provide and interface for storing and manipulating food and drink items
	//store instances of this class as a vector of poinrters
	// sole member function "tostring" should be the pure virtual function

};

class Menu : public ItemList {
public:
	// defining the menu fucntion parameters
	Menu()
	{
		load();
	}
	virtual ~Menu()
	{

	}
};

class StringType : public Menu {
	std::string stringmethod()
	{
	}
};
class IntType : public Menu {
	int intmethod()
	{
	}
};
class CharType : public Menu {
	char charmethod()
	{
	}
};

class Order : public ItemList {
	std::string add() {

	}
	std::string remove() {

	}
	int calculateTotal() {
		//what is eligible for a 2-4-1 discount 
		//if (class Appestiser::TwoForOne == "y") {} - change this so it asks if specfic foods are 2-4-1 - potentially while loop (sort menu out first)
	}
};


int main()
{
	//load();
	//Menu load(int); 
	int count;
	std::string userCommand;
	std::vector <std::string> parameters;
	//a vector of Menu pointers that can store pointers to the child types
	std::vector<Menu*> Menudata;

	Menudata.push_back(new StringType);
	Menudata.push_back(new IntType);
	Menudata.push_back(new CharType);

	

	Open_Menu = count;
	for (int i = 0; i < count; i++)
	{
		Menudata.push_back(Open_Menu);
	}

	//Item Nachos;
	//Item Buffalo_Wings;


	

	/*Menudata.push_back(new StringType);
	Menudata.push_back(new IntType);
	Menudata.push_back(new CharType);*/



	//calling menu function defined in menu.h
	
	
	// Create a menu object from a CSV file


	// Menu class objects
	//Menu Food;
	//Menu



		// Create an order object
		/*Order order = Order();

		while (userCommand != "exit")
		{
			getline(cin, userCommand);
			char* cstr = new char[userCommand.length() + 1];
			strcpy(cstr, userCommand.c_str());

			char* token;
			token = strtok(cstr, " ");

			while (token != NULL)
			{
				parameters.push_back(token);
				token = strtok(NULL, " ");
			}

			string command = parameters[0];

			if (command.compare("menu") == 0) {
				cout << menu.toString();
			}
			else if (command.compare("add") == 0)
			{
				Item* choice; // you need to instantiate this using the menu object!
				order.add(choice);

				// You may also wish to implement the ability to add multiple items at once!
				// e.g. add 1 5 9
			}
			else if (command.compare("remove") == 0)
			{

			}
			else if (command.compare("checkout") == 0)
			{

			}
			else if (command.compare("help") == 0)
			{

			}

			parameters.clear();

		}

		cout << "Press any key to quit...";
		std::getchar();*/

	;
}