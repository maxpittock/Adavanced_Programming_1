#include "Item.h"
#include "Menu.h"
#include "Order.h"

#include <string>
#include <iostream>
using namespace Ihed;

class Item {
	Item(/*std::string a, std::string b , int c*/)
	{

	}
public:
	std::string name;
	std::string price;
	int calories;
	char type;
	~Item() {

	}
};

class Appestiser : public Ihed::Item {
public:
	// Consult menu.csv to identify appropriate data types for these attributes

};
class MainCourse : public Ihed::Item {
public:

};class Beverage : public Ihed::Item {
public:
	// Consult menu.csv to identify appropriate data types for these attributes

};