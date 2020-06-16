#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int suma = 0;
  int ilosc = 0;
  int wartLicz=0;
  int i;
  printf("Ilosc liczb: \n");
  scanf("%d", &ilosc);
  for(i = 0; i < ilosc; i++) {
    printf("Wartosc liczby: %d\n", i + 1);
    scanf("%d", &wartLicz);
    suma = suma + wartLicz;
  }
  return suma;
}
