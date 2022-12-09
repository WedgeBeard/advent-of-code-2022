#include <iostream>
#include "Day01Part1.h"

using namespace std;

void Day01Part1::GetMaxCalories(FileReader fileReader)
{
	vector<int> d1p1StringVector = fileReader.GetIntVector("part1data.txt");
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

	cout << "Highest calorie value: " << maxValue << endl;
}
