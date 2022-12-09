#include "Day04Part2.h"

void Day04Part2::CalculateOverlap(FileReader fileReader)
{
	int overlapCount{ 0 };

	vector<CleanUpCrewRanges> cleanUpCrew = fileReader.GetCleanUpCrewRanges("day04part1data.txt");

	for (size_t teamIndex = 0; teamIndex < cleanUpCrew.size(); teamIndex++)
	{
		CleanUpCrewRanges crew = cleanUpCrew[teamIndex];

		if (((crew.elf1Min >= crew.elf2Min && crew.elf1Min <= crew.elf2Max) || 
			(crew.elf1Max >= crew.elf2Min && crew.elf1Max <= crew.elf2Max)) ||
			((crew.elf2Min >= crew.elf1Min && crew.elf2Min <= crew.elf1Max) || 
			(crew.elf2Max >= crew.elf1Min && crew.elf2Max <= crew.elf1Max))) {
			overlapCount++;
		}
	}

	cout << "DAY 04 PART 2 === " << "number of overlapping teams = " << overlapCount << endl;
}
