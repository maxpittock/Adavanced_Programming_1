#define _CRT_SECURE_NO_WARNINGS

#include "Menu.h"
#include "Order.h"
#include "Item.h"

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

//base class
class Item {
public:
	//Attributes
		string name;
		int calories;
		string price;

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
	string volume;
};

// needs to be an abstract class ( a class that has atleast one pure virtual function)
class ItemList
{
	// Provide and interface for storing and manipulating food and drink items
	//store instances of this class as a vector of poinrters
	// sole member function "tostring" should be the pure virtual function

};

class Menu : public ItemList {
	void load() {

	}
};

class Order : public ItemList {
	string add() {

	}
	string remove() {

	}
	int calculateTotal() {
		//what is eligible for a 2-4-1 discount 
		//if (class Appestiser::TwoForOne == "y") {} - change this so it asks if specfic foods are 2-4-1 (sort menu out first)
	}
};


int main()
{
	string userCommand;
	vector <string> parameters;

	// Create a menu object from a CSV file
	Menu menu = Menu("Takeaway/menu.csv");
	
	// Create an order object
	Order order = Order();

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
	std::getchar();

}