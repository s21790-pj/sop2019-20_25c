#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  pid_t masterPid = getpid();
  for(int i = 0; i < 100; i++) {
    if(fork() == 0) {
      //kod dla dziecka
      cout << "i: " << i << " PID: " << getpid() << " PPID: " << getppid() << endl;
      break;
    }
  }
  if(masterPid == getpid()) {
    int status = 0;
    waitpid(0, &status, 0);
  }
  return 0;
}
