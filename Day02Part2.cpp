#include "Day02Part2.h"

void Day02Part2::GetPRSScore(FileReader fileReader)
{
	vector<RPSPair> pairVector = fileReader.GetRPSPairs("day02part1data.txt");
	int score{ 0 };

	for (int i = 0; i < pairVector.size(); i++) {
		string op = pairVector[i].opponent; //ABC
		string pl = pairVector[i].player; //XYZ
		string combo = op + pl;

		if (combo == "BX") {
			score += 1;
		}
		if (combo == "CX") {
			score += 2;
		}
		if (combo == "AX") {
			score += 3;
		}
		if (combo == "AY") {
			score += 4;
		}
		if (combo == "BY") {
			score += 5;
		}
		if (combo == "CY") {
			score += 6;
		}
		if (combo == "CZ") {
			score += 7;
		}
		if (combo == "AZ") {
			score += 8;
		}
		if (combo == "BZ") {
			score += 9;
		}
	}

	cout << "DAY 02 PART 2 === " << "total score = " << score << endl;
}
