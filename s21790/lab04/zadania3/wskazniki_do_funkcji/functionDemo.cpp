#include <iostream>
using namespace std;

typedef void (*myFunctionTypeName)(int a);

void sampleFunction(int a);
void functionUsingFunction(myFunctionTypeName func);
void sampleTriggeringFunction();

int main(){
  sampleTriggeringFunction();
  return 0;
}

void sampleFunction(int a) {
  cout << "Got: " << a << endl;
}

void functionUsingSampleFunction(myFunctionTypeName func) {
  func(1);
}

void sampleTriggeringFunction() {
  functionUsingSampleFunction(sampleFunction);
}
