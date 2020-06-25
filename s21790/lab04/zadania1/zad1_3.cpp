#include <iostream>
#include <stdlib.h>

using namespace std;

//zainicjowanie funkcji rysujacej
void treeDraw(int);

int main(int argc, char **argv) {
//przypisanie do zmiennej argumentow przekazanych do programu
  int lines = atoi(argv[1]);
//wywolanie funkcji rysujacej
  treeDraw(lines);

  return 0;

}

//funkcja rysujaca
void treeDraw(int lines){
  for(int row = 1; row <= lines; row++){
    for(int i = 0; i < lines - row; i++){
      cout << " ";
    }
    for(int j = 0; j < (row*2) - 1; j++){
      cout << "*";
    }
    cout << endl;
  }
}
