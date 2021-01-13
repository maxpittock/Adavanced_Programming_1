#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

//load function declaration


class ItemList {
public:
	virtual std::string ToString()= 0;
};
class Item;
extern std::vector<Item*> Menudata;

class Menu : public ItemList {
public:
	// Creating menu constructor
	Menu();
	std::ifstream MyFile;
	std::string line;
	//create a line variable to store data
	std::string ToString();
	//variable for file
	std::string Open_Menu = ("menu.csv");
	
	int load();
	~Menu();
	
};
