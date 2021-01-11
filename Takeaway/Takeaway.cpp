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
	Item(/*std::string a, std::string b , int c*/)
	{
		//name = a;
		//price = b;
		//calories = c;
	}
	//Attributes
		std::string name;
		std::string price;
		int calories;
		char type;
	//store instances of this class as a vector of poinrters
	~Item()
	{

	}
};

class Appestiser : public Item {
public:
	// Consult menu.csv to identify appropriate data types for these attributes
	char shareable;
	char TwoForOne;
};

class MainCourse : public Item {
public:

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
public:
	
	// Provide and interface for storing and manipulating food and drink items
	virtual std::string ToString() = 0;
	// sole member function "tostring" should be the pure virtual function

};

class Menu : public ItemList {
public:
	// Creating menu constructor
	Menu()
	{
		std::cout << "Created menu!" << std::endl;
		load();
	}
	std::vector<Item*> Menudata;
	std::string ToString()
	{
		std::string test = "";
		for (int i = 0; i <= Menudata.size(); i++)
		{

			//Appestiser* n = new Appestiser;
			//n->type = 
			
			Menudata.push_back(new Item());
			
			//point the variables to the objects from file.
			
			std::cout << Menudata[0] << std::endl;
			Menudata[i]->name;
			Menudata[i]->price;
			Menudata[i]->calories;
			

			std::cout << Menudata[1] << std::endl;
		}
		return test;
	}
	
	

	~Menu()
	{
		std::cout << "Destroyed menu!" << std::endl;
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
	int count = 0;
	std::string userCommand;
	std::vector <std::string> parameters;
	
	//a vector of Menu pointers that can store pointers to the child types
	
	//Menu e;
	//Create a vector of pointers to the file.... Something like shown below except instead of hard coding the values it reads from the file
	

	
	//need item_list object 
	//std::cout << "yo" << std::endl;
	//ItemList e;
	//Menudata.push_back(new Appestiser);
	//Menudata.push_back(new MainCourse);
	//Menudata.push_back(new Beverage);

	 //Menudata[0]->

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