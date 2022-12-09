#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

class FileReader
{
public:
	vector<int> GetIntVector(string fileUrl);
};