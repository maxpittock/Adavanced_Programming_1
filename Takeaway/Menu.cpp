#include "Menu.h"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>


// defining the load fucntion parameters
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
		// once all the data is inputted to console close file.
		MyFile.close();
		return 0;
}

