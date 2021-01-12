#pragma once


class Order : public Menu::ItemList {
		std::string add();
		std::string remove();
		int calculateTotal();
		//what is eligible for a 2-4-1 discount 
		//if (class Appestiser::TwoForOne == "y") {} - change this so it asks if specfic foods are 2-4-1 - potentially while loop (sort menu out first)

	};
