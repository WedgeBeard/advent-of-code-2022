#include <iostream>
#include "AdventOfCode2022.h"

using namespace std;

/*
Day01Part1 d1p1;
Day01Part2 d1p2;
Day02Part1 d2p1;
Day02Part2 d2p2;
Day03Part1 d3p1;
Day03Part2 d3p2;
Day04Part1 d4p1;
Day04Part2 d4p2;
Day05Part1 d5p1;
*/

Day05Part2 d5p2;

int main() {
	cout << "Program started." << endl;
	FileReader fileReader;

	/*
	d1p1.GetMaxCalories(fileReader);
	d1p2.GetTopThreeCalorieSum(fileReader);
	d2p1.GetPRSScore(fileReader);
	d2p2.GetPRSScore(fileReader);
	d3p1.CalculateSumOfPriorities(fileReader);
	d3p2.CalculateSumOfCommonItem(fileReader);
	d4p1.CalculateContainment(fileReader);
	d4p2.CalculateOverlap(fileReader);
	d5p1.CalculateTopCrates(fileReader);
	*/

	d5p2.CalculateTopCrates(fileReader);

	return 0;
};