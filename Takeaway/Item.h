#pragma once
#include <string>
#include <iostream>
namespace Ihed
{
	class Item {
		Item(/*std::string a, std::string b , int c*/);
	public:
		std::string name;
		std::string price;
		int calories;
		char type;
		~Item();
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
	// Consult menu.csv to identify appropriate data types for these attributes
}