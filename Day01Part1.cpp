#include <iostream>
#include "Day01Part1.h"

using namespace std;

void Day01Part1::GetMaxCalories(FileReader fileReader)
{
	vector<int> d1p1StringVector = fileReader.GetIntVector("day01part1data.txt");
	int maxValue{ 0 };
	int currValue{ 0 };

	for (int i = 0; i < d1p1StringVector.size(); i++) {
		if (d1p1StringVector[i] == 0) {
			if (currValue > maxValue) {
				maxValue = currValue;
			}
			currValue = 0;
		}
		else
		{
			currValue = currValue + d1p1StringVector[i];
		}
	}

	cout << "DAY 01 PART 1 === Highest calorie value: " << maxValue << endl;
}
