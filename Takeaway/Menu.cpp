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
	ToString();
	}

std::vector<Item*> Menudata;
int Menu::load()
{
	//Find the correct file location and store the information in the variable
	MyFile.open(Open_Menu);
	//while the file is executing properly
	while (MyFile.good())
	{

		Item* t;
		
		Appestiser* a;
		MainCourse* m;
		Beverage* b;

		std::string::size_type G;
		
		//*ptr = *a;
		//std::getline(MyFile, line, '\n');
		//Menudata[j]->type;
		std::getline(MyFile, line, ',');
		ptr = &line;
		int I_line = std::stoi(line);
		//int I_line = std::stoi(line);
		
		
		std::cout << line << std::endl;
		
		//a = c;
		//Appestiser ref = *ptr;

		//std::cout << I_line << std::endl;
		//std::cout << line << std::endl;
		//std::cout << ptr << std::endl;
		
		

		//line.data();
		//Menudata.push_back(ptr);
		//if( type == a){} use switches if you have time and understand them if not you can use if sytatments identifying the type in the "menu.csv" allowing you to allocate what object to use and therefore what variables it should be using
		//Appestiser& n;
	}
	if (!MyFile.is_open())
	{
		std::cout << "File Failed to open" << std::endl;
	}
	// once all the data is inputted to console close file.
	MyFile.close();
	return 0;
}
std::string Menu::ToString() 
	{	

	std::string test;
		{
			//Stores an unamed object of Item class
			load();
			for (int i = 0; i <= line.size(); i++)
			{


				//ptr = &line;
				//std::cout << *ptr << std::endl;
				//ptr++;
				/*Menudata.push_back((*ptr));

				Menudata[i]->name;
				(*n)->name;
				n++;
				Menudata[i]->price;
				(*n)->price;
				n++;
				Menudata[i]->calories;
				(*n)->calories;
				n++;
				*/
			}
		


			//ItemList& a = ;
			//a.ToString();
			//Object pointer to appestiser
		
			//point to the next location
			
			
			//n->type;

			
			
			// menudata[i]->type is basically saying - wherever the i is (in the for loop) that is the type 
			// then n -> type is saying the "type" location now = n which if n had a value (from getline) it would give the vector the data
			

			//Menudata.push_back(n);	
			//n->type = 
			//point the variables to the objects from file.

			//std::cout << Menudata[0] << std::endl;	 
			
			//std::cout << Menudata[1] << std::endl;
		}
		return test;
	}



Menu::~Menu() {
	std::cout << "destroyed menu!" << std::endl;
}














