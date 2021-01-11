#pragma once
#include <string>
#include <iostream>

//load function declaration

namespace Mhed {
	class ItemList {

	};
	class Menu : public ItemList {
		Menu();
		int load();
		~Menu();


	};
}