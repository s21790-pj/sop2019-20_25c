#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

int main(){
  cout << "My PID: " << getpid() << " My PPID: " << getppid() << endl;
  int x;
  cin >> x;
  return 0;
}
