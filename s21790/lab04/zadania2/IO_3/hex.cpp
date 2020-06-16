#include <iostream>
#include <fstream>
#include <iomanip>
#include "functions.hpp"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void printHexLineC(int, char*, int);
void printHexLineCpp(int, char*, int);
void runCppVersion(int argc, char** argv);
void runCVersion(int argc, char** argv);

int main(int argc, char** argv) {
  runCVersion(argc, argv);
  //runCppVersion(argc, argv);
  return 0;
}

void runCVersion(int argc, char** argv) {
  printf("Hello world\r\n");
  verifyInputData(argc, argv);
  string pathToInputFile = parseInputData(argv[1]);
  printf("Loading file: %s\r\n", pathToInputFile.c_str());
  FILE *file = fopen(pathToInputFile.c_str(), "r");
  if(file != NULL) {
    //get file length
    fseek(file, 0, SEEK_END);
    long int fileSize = ftell(file);

    //rewind to start
    fseek(file, 0, SEEK_SET);

    char buffer[16];
    long int offset = 0L;
    while(offset < fileSize) {
      size_t readLength = fread(buffer, sizeof(char), 16, file);
      if(readLength == 0) {
        printf("Error while reading file: %s at offset: %08X\r\n", pathToInputFile.c_str(), offset);
        break;
      }
      offset += readLength;
      printHexLineC(offset, buffer, readLength);
    }
    printf("Closing file: %s\r\n", pathToInputFile.c_str());
    fclose(file);
  }
}

void runCppVersion(int argc, char** argv) {
  verifyInputData(argc, argv);
  string pathToInputFile = parseInputData(argv[1]);
  cout << "Loading file: " << pathToInputFile << endl;
  ifstream file(pathToInputFile.c_str(), ios::in);
  if(file.is_open()) {
    char buffer[16];

    int offset = 0;

    while(!file.eof()) {
      file.read(buffer, 16);
      offset += file.gcount();
      printHexLineCpp(offset, buffer, file.gcount());
    }
    cout << "Closing file: " << pathToInputFile << endl;
    file.close();
  }else {
    cout << "Cannot open file: " << pathToInputFile << endl;
  }
}

void printHexLineC(int offset, char* data, int dataLength) {
  printf("%08X ", offset);
  for(int i = 0; i < dataLength; i++) {
    unsigned char uc = (unsigned char) data[i];
    unsigned int number = (unsigned int) uc;
    printf("%02X ", number);
  }
  for(int i = 16; i > dataLength; i--) {
    printf("  ");
  }
  int limitingChar = ' ';
  for(int i = 0; i < dataLength; i++) {
    unsigned char uc = (unsigned char) data[i];
    if(uc < limitingChar) {
      uc = '.';
    }
    printf("%c", uc);
  }
  printf("\r\n");
}

void printHexLineCpp(int offset, char* data, int dataLength) {
  cout << hex << setfill('0') << setw(8) << uppercase << offset << dec;
  cout << "  ";
  //cout << dataLength;
  for(int i = 0; i < dataLength; i++) {
    unsigned char uc = (unsigned char) data[i];
    unsigned int number = (unsigned int) uc;
    cout << hex << setw(2) << uppercase << number << " ";
  }
  for(int i = 16; i > dataLength; i--) {
    cout << "  ";
  }
  cout << " " << nouppercase;

  int limitingChar = ' ';
  for(int i = 0; i < dataLength; i++) {
    unsigned char uc = (unsigned char) data[i];
    switch(uc) {
      case '\r':
      case '\n':
      case '\b':
      case '\t':
      case '\v':
      case 12:
              uc = '.';
    }
    if(uc < limitingChar) {
      uc = '.';
    }
    cout << uc;
  }
  cout << endl;
}
