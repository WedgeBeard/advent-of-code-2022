#include "Day03Part2.h"

void Day03Part2::CalculateSumOfCommonItem(FileReader fileReader)
{
	vector<string> rucksacks = fileReader.GetStringVector("day03part1data.txt");
	int sum{ 0 };
	const int lower{ 96 };
	const int upper{ 38 };

	for (int i = 0; i < rucksacks.size(); i+=3) {
		string rucksack1 = rucksacks[i];
		string rucksack2 = rucksacks[i + 1];
		string rucksack3 = rucksacks[i + 2];

		char badge = GetBadge(rucksack1, rucksack2, rucksack3);
		if (isupper(badge)) {
			sum += int(badge) - upper;
		}
		else {
			sum += int(badge) - lower;
		}
	}

	cout << "DAY 03 PART 2 === " << "sum of priorities = " << sum << endl;
}

char Day03Part2::GetBadge(std::string& rucksack1, std::string& rucksack2, std::string& rucksack3)
{
	for (size_t rucksack1Index = 0; rucksack1Index < rucksack1.size(); rucksack1Index++)
	{
		char currChar = rucksack1[rucksack1Index];
		if (RucksackContains(currChar, rucksack2) &&
			RucksackContains(currChar, rucksack3)) {
			return currChar;
		}
	}
}

bool Day03Part2::RucksackContains(char c, string rucksack)
{
	for (size_t i = 0; i < rucksack.size(); i++)
	{
		if (c == rucksack[i]) {
			return true;
		}
	}
	return false;
}
