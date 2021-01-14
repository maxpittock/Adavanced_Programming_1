#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

//load function declaration


class ItemList {
public:
	virtual std::string ToString() = 0;
};
class Item;
extern std::vector<Item*> Menudata;

class Menu : public ItemList {
public:
	// Creating menu constructor
	Menu();
	std::string line;
	std::string * ptr;
	std::ifstream MyFile;
	std::string Open_Menu = ("menu.csv");
	

	int j = 0;
	//create a line variable to store data
	std::string ToString(); 
	//variable for file
	
	
	int load();
	~Menu();
	
};
