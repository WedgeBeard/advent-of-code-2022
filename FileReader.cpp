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
    int totalLinesRead = 0;
    
    ifstream file(fileUrl, ios::in);

    if (!file) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    string value;

    while (getline(file, value)) {
        if (value.size() > 0) {
            intVector.push_back(stoi(value));
            totalLinesRead++;
        }
        else {
            intVector.push_back(0);
            totalLinesRead++;
        }
    }

    file.close();
    cout << "Total lines read: " << totalLinesRead << endl;
    return intVector;
}
