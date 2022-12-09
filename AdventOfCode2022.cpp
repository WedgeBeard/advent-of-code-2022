#include <iostream>
#include "AdventOfCode2022.h"

using namespace std;

Day01Part1 d1p1;
Day01Part2 d1p2;
Day02Part1 d2p1;
Day02Part2 d2p2;

int main() {
	cout << "Program started." << endl;
	FileReader fileReader;

	d1p1.GetMaxCalories(fileReader);
	d1p2.GetTopThreeCalorieSum(fileReader);
	d2p1.GetPRSScore(fileReader);
	d2p2.GetPRSScore(fileReader);
	return 0;
};