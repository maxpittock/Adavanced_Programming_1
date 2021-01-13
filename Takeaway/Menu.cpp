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


std::vector<Item*> Menudata;
std::string Menu::ToString() 
	{	
	std::string test;
		for (int i = 0; i <= Menudata.size(); i++)
		{
			//Stores an unamed object of Item class
			Menudata.push_back(new Item());
			
		
			
			Item temp;
			//Object pointer to appestiser
			Appestiser* n;

			
			//Appestiser& n;
			
			
			Menudata[i]->type;
			(*n)->type;
			Menudata.push_back(n);


			Menudata[i]->name;
			(*n)->name >> test;
			 
			Menudata[i]->price;
			(*n)->price;

			Menudata[i]->calories;
			(*n)->calories;

			//n->type;

			//use getline to get data from the file and put it into n.
			// n is an object of appestiser
			// menudata[i]->type is basically saying - wherever the i is (in the for loop) that is the type 
			// then n -> type is saying the "type" location now = n which if n had a value (from getline) it would give the vector the data
			//variables "line" may need to be changed - was orgianlly in "load()" now in menu.h 

			//Menudata.push_back(n);
			
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
	while (MyFile.good()) 
	{
		//using CSV file so commas are used to divide individual information out of the file and store in line
		std::getline(MyFile, line, ',');
		//std::getline(MyFile, line, '\n');
		// print line to console	
	}
	if (!MyFile.is_open())
	{
		std::cout << "File Failed to open" << std::endl;
	}
	// once all the data is inputted to console close file.
	MyFile.close();
	return 0;
}

Menu::~Menu() {
	std::cout << "destroyed menu!" << std::endl;
}
