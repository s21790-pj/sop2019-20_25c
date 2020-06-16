#include "functions.hpp"

using namespace std;

void verifyInputData(int argc, char** argv) {
  if (argc != 2) {
    throw InputDataException();
  }
}

string parseInputData(char* path) {
  return string(path);
}
