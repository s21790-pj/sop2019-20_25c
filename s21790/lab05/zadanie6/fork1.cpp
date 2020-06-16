#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int iloscProcesow = 100;
  int i = 0;
  for(i = 0; i < iloscProcesow; ++i) {
    if(fork() == 0) {
      //kod dla dziecka
      cout << "i: " << i << " PID: " << getpid() << " PPID: " << getppid() << endl;
    }else {
      //kod dla rodzica
      wait(NULL);
      break;
    }
  }
  return 0;
}
