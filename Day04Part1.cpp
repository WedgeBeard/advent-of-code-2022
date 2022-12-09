#include "Day04Part1.h"

void Day04Part1::CalculateContainment(FileReader fileReader)
{
	vector<CleanUpCrewRanges> cleanUpCrew = fileReader.GetCleanUpCrewRanges("day04data.txt");
	int overlapCount{ 0 };

	for (size_t teamIndex = 0; teamIndex < cleanUpCrew.size(); teamIndex++)
	{
		CleanUpCrewRanges crew = cleanUpCrew[teamIndex];

		if ((crew.elf1Min >= crew.elf2Min && crew.elf1Max <= crew.elf2Max) ||
			(crew.elf2Min >= crew.elf1Min && crew.elf2Max <= crew.elf1Max)) {
			overlapCount++;
		}
	}

	cout << "DAY 04 PART 1 === " << "number of overlapping teams = " << overlapCount << endl;
}
