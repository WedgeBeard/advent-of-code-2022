#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include "RPSPair.h"
#include "CleanUpCrewRanges.h"
#include "StackMove.h"

using namespace std;

class FileReader
{
public:
	vector<int> GetIntVector(string fileUrl);
	vector<RPSPair> GetRPSPairs(string fileUrl);
	vector<string> GetStringVector(string fileUrl);
	vector<CleanUpCrewRanges> GetCleanUpCrewRanges(string fileUrl);
	vector<StackMove> GetStackMoves(string fileUrl);
};