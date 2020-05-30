#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main() {

    printf("root %d\n", getpid());

    if (fork()) {
		
        fork();
		
    } else {
        if (fork()){
            if (fork()) {
			
                fork();
            }
        }
    }

    printf("child pid %d    parent pid %d\n", getpid(), getppid());
    fflush(stdout);
    sleep(10);

    return 0;
}