#define _CRT_SECURE_NO_WARNINGS

#include "Menu.h"
#include "Order.h"
#include "Item.h"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

//base class
int main()
{
	//load();
	//Menu load(int); 
	int count = 0;
	std::string userCommand;
	std::vector <std::string> parameters;
	Menu e;
	//a vector of Menu pointers that can store pointers to the child types
	
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