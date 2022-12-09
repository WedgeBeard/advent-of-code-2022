#pragma once
#include "FileReader.h"
#include <iostream>
#include <string>

using namespace std;

class Day03Part1 {
public:
	void CalculateSumOfPriorities(FileReader fileReader);
	char GetDuplicate(string rucksack);
};