#include <iostream>
#include <string>
#include <list>
#include <stdlib.h>
#include <stdio.h>
#include "functions.cpp"

FILE* getFile(const string& pathToInputFile);

int main(int argc, char** argv) {
  verifyInputData(argc, argv);
  string pathToInputFile = parseInputData(argv[1]);
  cout << "Loading file: " << pathToInputFile << endl;

  FILE *file = getFile(pathToInputFile);
  if(file != NULL) {
    int lines = 0;
    fscanf(file, "%d\r\n", &lines);

    list<int>numbers;

    while(lines-- > 0) {
      int number = 0;
      fscanf(file, "%d\r\n", &number);
      numbers.push_front(number);
    }
    cout << "Closing file: " << pathToInputFile << endl;
    fclose(file);

    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
      cout << *it << endl;
    }
  }else {
    cout << "Cannot open file" << endl;
    return 1;
  }
  return 0;
}

FILE* getFile(const string& pathToInputFile) {
  FILE *file = fopen(pathToInputFile.c_str(), "r");
  return file;
}
