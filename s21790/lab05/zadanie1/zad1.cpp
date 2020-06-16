#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

int main(){
  cout << "My PID: " << getpid() << " My PPID: " << getppid() << endl;
  return 0;
} 
