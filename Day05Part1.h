#pragma once
#include "FileReader.h"
#include <stack>
#include "StackMove.h"

class Day05Part1 {
public:
	void CalculateTopCrates(FileReader fileReader);
private:
	vector<stack<char>> InitializeTestStack();
	vector<stack<char>> InitializeStack();
};