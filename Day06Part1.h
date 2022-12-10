#pragma once
#include "FileReader.h"

class Day06Part1 {
public:
	void FindFirstMarker(FileReader fileReader);
	int GetMarkerPosition(string packet, int searchSize, int startOfPacket, int currPosition);
	bool CheckUnique(string str);
};