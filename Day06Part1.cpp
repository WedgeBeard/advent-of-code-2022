#include "Day06Part1.h"

void Day06Part1::FindFirstMarker(FileReader fileReader)
{
	//string packet = fileReader.GetStringVector("day06part1data.txt")[0];
	//const int searchSize{ 4 };
	
	string packet = fileReader.GetStringVector("day06part1data.txt")[0];
	const int searchSize{ 14 };

	int startOfPacket{ 0 };
	int currPosition{ 0 };

	int markerPostition = GetMarkerPosition(packet, searchSize, startOfPacket, currPosition);

	cout << "DAY 06 PART 1 & 2 === first marker position : " << markerPostition << endl;
}

int Day06Part1::GetMarkerPosition(string packet, int searchSize, int startOfPacket, int currPosition) {
	cout << "size: " << packet.size() << endl;
	while (currPosition < packet.size() - searchSize +1) {
		string substr = packet.substr(currPosition, searchSize);

		if (CheckUnique(substr)) {
			return currPosition + searchSize;
		}
		currPosition++;
	}
}

bool Day06Part1::CheckUnique(string str)
{
	for (int i = 0; i < str.length() - 1; i++) {
		for (int j = i + 1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				return false;
			}
		}
	}
	return true;
}
