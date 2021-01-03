#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

class ReadFile {
	int menu()
	{
		ifstream MyFile;
		MyFile.open("menu.csv");

		while (MyFile.good()) {
			string line;
			getline(MyFile, line, ',');
			cout << line << endl;
		}
		MyFile.close();
	}

};



