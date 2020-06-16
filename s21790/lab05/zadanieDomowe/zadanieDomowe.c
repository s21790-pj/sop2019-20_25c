#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/wait.h>

int main(){

pid_t pid1, pid2, pid3, pid4, pid5, pid6;
printf("Rodzic wszystkich: %d\n",getpid());

pid1 = fork();

if(pid1 > 0){
    pid2 = fork();
    if(pid2 == 0){
        printf("Dziecko id: %d Rodzic id: %d \n", getpid(),getppid());
        pid4 = fork();
        if(pid4 > 0){
          pid5 = fork();
          if(pid5 == 0){
            printf("Dziecko id: %d Rodzic id: %d \n", getpid(),getppid());
          }
        }
        if(pid4 == 0){
            printf("Dziecko id: %d Rodzic id: %d \n", getpid(),getppid());
        }
    }
}
if(pid1 == 0){
    printf("Dziecko id: %d Rodzic id: %d \n", getpid(),getppid());
    pid3 = fork();
    if(pid3 == 0){
        printf("Dziecko id: %d Rodzic id: %d \n", getpid(),getppid());
    }
    if(pid3 > 0){
      pid6 = fork();
      if(pid6 == 0) {
        printf("Dziecko id: %d Rodzic id: %d \n", getpid(),getppid());
      }
    }
}
for(int i=0; i<3; i++)
  wait(NULL);
}
