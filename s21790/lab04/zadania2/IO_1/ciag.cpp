#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <list>
#include "functions.cpp"

using namespace std;

bool getFileStream(const string&, ifstream&);

int main(int argc, char** argv) {
  verifyInputData(argc, argv);
  string pathToInputFile = parseInputData(argv[1]);
  cout << "Loading file: " << pathToInputFile << endl;
  ifstream fileStream;

  if(getFileStream(pathToInputFile, fileStream)) {
    string buffer;
    getline(fileStream, buffer);
    int lines = atoi(buffer.c_str());
    list<string>numbers;
    while(lines-- > 0) {
      getline(fileStream, buffer);
      numbers.push_front(buffer);
    }
    cout << "Closing file: " << pathToInputFile << endl;
    fileStream.close();
    for(list<string>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
      cout << *it << endl;
    }

  }else {
    cout << "Cannot open file" << endl;
  }
  return 0;
}

bool getFileStream(const string& pathToInputFile, ifstream& fileStream) {
  fileStream.open(pathToInputFile.c_str(), ios::in);
  return fileStream.is_open();
}
