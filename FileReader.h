#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include "RPSPair.h"

using namespace std;

class FileReader
{
public:
	vector<int> GetIntVector(string fileUrl);
	vector<RPSPair> GetRPSPairs(string fileUrl);
};