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
	std::string line;
	std::ifstream MyFile;
	//variable for file
	std::string Open_Menu = ("menu.csv");
	// Creating menu constructor
	Menu();
	int load();
	~Menu();
	
};
