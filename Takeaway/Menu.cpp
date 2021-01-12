#include "Menu.h"
#include "Order.h"
#include "Item.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstring>


// defining the load fucntion definition


	// Creating menu constructor
Menu::Menu() {
	std::cout << "Creating Menu!" << std::endl;
	load();
	}
Menu::~Menu() {
		std::cout << "Destroyed menu!" << std::endl;
}

std::vector<Item*> Menudata;

std::string ItemList::ToString() 
	{
	std::string test;
		for (auto i = 0; i <= Menudata.size(); i++)
		{
			//Creates object of item
			Menudata.push_back(new Item());
			//creates object of appestiser
			Appestiser* n = new Appestiser();
			//I = type
			Menudata[i]->type;
			//n = type
			
			n->type;

			//use getline to get data from the file and put it into n.
			// n is an object of appestiser
			// menudata[i]-> is basically saying - wherever ther i is (in the for loop) that is the type 
			// then n -> type is saying the "type" location now = n which if n had a value (from getline) it would give the vector the data
			//variables "line" may need to be changed - was orgianlly in "load()" now in menu.h 
	
			Menudata[i]->price;
			Menudata[i]->calories;

			

			Menudata.push_back(n);
			std:
			//n->type = 
			
			

			//point the variables to the objects from file.

			//std::cout << Menudata[0] << std::endl;
			
			//std::cout << Menudata[1] << std::endl;
		}
		return test;
	}

	
int Menu::load()
	{

		
		//Find the correct file location and store the information in the variable
		MyFile.open(Open_Menu);
		//while the file is executing properly
		while (MyFile.good()) {

			//create a line variable to store data
			
			//using CSV file so commas are used to divide individual information out of the file and store in line
			std::getline(MyFile, line, ',');
			
			//std::getline(MyFile, line, '\n');
			// print line to console
			std::cout << line << std::endl;

		}
		if (!MyFile.is_open())
		{
			std::cout << "File Failed to open" << std::endl;
		}
		// once all the data is inputted to console close file.
		MyFile.close();
		return 0;
	}




