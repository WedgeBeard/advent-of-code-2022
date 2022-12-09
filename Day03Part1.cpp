#include "Day03Part1.h"
#include <map>

void Day03Part1::CalculateSumOfPriorities(FileReader fileReader)
{
	vector<string> rucksacks = fileReader.GetStringVector("day03part1data.txt");
	int sum{ 0 };
	const int lower{ 96 };
	const int upper{ 38 };

	for (int i = 0; i < rucksacks.size(); i++) {
		char dupe = GetDuplicate(rucksacks[i]);
		if (isupper(dupe)) {
			sum += int(dupe) - upper;
		}
		else {
			sum += int(dupe) - lower;
		}
	}
	
	cout << "DAY 03 PART 1 === " << "sum of priorities = " << sum << endl;
}

char Day03Part1::GetDuplicate(string rucksack)
{
	int halfWay = rucksack.size()/2;
	string front = rucksack.substr(0, halfWay);
	string back = rucksack.substr(halfWay, halfWay);

	for (int i = 0; i < halfWay; i++) {
		char charToCheck = front[i];
		for (int backPos = 0; backPos < halfWay; backPos++) {
			if (charToCheck == back[backPos]) {
				return charToCheck;
			}
		}
	}

	return 0;
}
