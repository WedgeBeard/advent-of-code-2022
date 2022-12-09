#include "FileReader.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> FileReader::GetIntVector(string fileUrl)
{
    vector<int> intVector;
    
    ifstream file(fileUrl, ios::in);

    if (!file) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    string value;

    while (getline(file, value)) {
        if (value.size() > 0) {
            intVector.push_back(stoi(value));
        }
        else {
            intVector.push_back(0);
        }
    }

    file.close();
    return intVector;
}

vector<RPSPair> FileReader::GetRPSPairs(string fileUrl)
{
    vector<RPSPair> pairVector;

    ifstream file(fileUrl, ios::in);

    if (!file) {
        cerr << fileUrl << " - File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    string opponent, player;

    while (file >> opponent >> player) {
        RPSPair pair;
        pair.opponent = opponent;
        pair.player = player;
        pairVector.push_back(pair);
    }

    return pairVector;
}

vector<string> FileReader::GetStringVector(string fileUrl)
{
    vector<string> stringVector;

    ifstream file(fileUrl, ios::in);

    if (!file) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    string value;

    while (file >> value) {
        stringVector.push_back(value);
    }

    file.close();
    return stringVector;
}

vector<CleanUpCrewRanges> FileReader::GetCleanUpCrewRanges(string fileUrl)
{
    vector<CleanUpCrewRanges> crewRanges;

    ifstream file(fileUrl, ios::in);

    if (!file) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    string elf1Min, elf1Max, elf2Min, elf2Max;

    while (getline(file, elf1Min, '-') &&
        getline(file, elf1Max, ',') &&
        getline(file, elf2Min, '-') &&
        getline(file, elf2Max)) {
        
        CleanUpCrewRanges crew;
        crew.elf1Min = stoi(elf1Min);
        crew.elf1Max = stoi(elf1Max);
        crew.elf2Min = stoi(elf2Min);
        crew.elf2Max = stoi(elf2Max);
        crewRanges.push_back(crew);
    }

    file.close();

    return crewRanges;
}
