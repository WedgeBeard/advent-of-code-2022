#include <iostream>
#include "AdventOfCode2022.h"
#include "FileReader.h"
#include "Day01Part1.h"
#include "Day01Part2.h"

using namespace std;

Day01Part1 d1p1;
Day01Part2 d1p2;

int main() {
	cout << "Program started." << endl;
	FileReader fileReader;

	d1p1.GetMaxCalories(fileReader);
	d1p2.GetTopThreeCalorieSum(fileReader);
	
	return 0;
};