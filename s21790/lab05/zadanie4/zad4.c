#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

  pid_t p = fork();
  if(p == 0) {
    printf("D: %d R: %d\n", getpid(), getppid());
    fflush(stdout);
    sleep(3);
  }else {
    printf("R: %d Rr: %d D: %d\n", getpid(), getppid(), p);
    fflush(stdout);
    wait(NULL);
    printf("Rodzic koniec \n");
    fflush(stdout);
  }
  return 0;
}
