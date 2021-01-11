#include "Menu.h"
#include "Order.h"
#include "Item.h"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>


// defining the load fucntion definition
using namespace Mhed;
using namespace Ihed;


class Menu : public Mhed::ItemList {
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

			//Menudata.push_back(new Item());

			//point the variables to the objects from file.

			std::cout << Menudata[0] << std::endl;
			Menudata[i]->name;
			Menudata[i]->price;
			Menudata[i]->calories;


			std::cout << Menudata[1] << std::endl;
		}
		return test;
	}
	int load()
	{
		//variable for file
		std::ifstream MyFile;
		std::string Open_Menu = ("menu.csv");
		//Find the correct file location and store the information in the variable
		MyFile.open(Open_Menu);
		//while the file is executing properly
		while (MyFile.good()) {
			//create a line variable to store data
			std::string line;
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

	~Menu()
	{
		std::cout << "Destroyed menu!" << std::endl;
	}
};

