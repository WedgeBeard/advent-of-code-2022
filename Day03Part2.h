#pragma once
#include "FileReader.h"

using namespace std;

class Day03Part2 {
public:
	void CalculateSumOfCommonItem(FileReader fileReader);
	char GetBadge(std::string& rucksack1, std::string& rucksack2, std::string& rucksack3);
	bool RucksackContains(char c, string rucksack);
};