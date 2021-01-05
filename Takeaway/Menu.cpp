#include "Menu.h"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>


// defining the menu fucntion parameters
int menu()
{
		//variable for file
		std::ifstream MyFile;
		//Find the correct file location and store the information in the variable
		MyFile.open("menu.csv");
		//while the file is executing properly
		while (MyFile.good()) {
			//create a line variable to store data
			std::string line;
			//using CSV file so commas are used to divide individual information out of the file and store in line
			std::getline(MyFile, line, ',');
			// print line to console
			std::cout << line << std::endl;
		}



		// once all the data is inputted to console close file.
		MyFile.close();

		return 0;
}