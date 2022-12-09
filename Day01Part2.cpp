#include "Day01Part2.h"
#include <algorithm>

void Day01Part2::GetTopThreeCalorieSum(FileReader fileReader)
{
	vector<int> d1p1StringVector = fileReader.GetIntVector("day01part1data.txt");
	vector<int> sortedMaxCalories;

	int currValue{ 0 };

	for (int i = 0; i < d1p1StringVector.size(); i++) {
		if (d1p1StringVector[i] == 0) {
			sortedMaxCalories.push_back(currValue);
			currValue = 0;
		}
		else
		{
			currValue = currValue + d1p1StringVector[i];
		}
	}

	sort(sortedMaxCalories.begin(), sortedMaxCalories.end());
	int size = sortedMaxCalories.size() -1;
	int combined = sortedMaxCalories[size] + sortedMaxCalories[size - 1] + sortedMaxCalories[size - 2];

	cout << "DAY 01 PART 2 === Sum of highest 3 calorie totals: " << combined << endl;
}
