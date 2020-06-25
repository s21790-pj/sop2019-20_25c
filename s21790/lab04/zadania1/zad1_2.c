#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
//zainicjowanie zmiennej suma
  int suma = 0;
//zainicjowanie zmiennej Ilosc
  int ilosc = 0;
//zainicjowanie zmiennej wartLicz
  int wartLicz=0;
//zainicjowanie zmiennej i
  int i;
//wypisanie tekstu za pomoca komendy printf
  printf("Ilosc liczb: \n");
//pobranie wartosci od uzytkowanika za pomoca komendy scanf oraz przypisanie jej do zmiennej
  scanf("%d", &ilosc);
//wywolanie petli przechodzacej przez liczby podane przez uzytkownika
  for(i = 0; i < ilosc; i++) {
//wypisanie tekstu za pomoca komendy printf
    printf("Wartosc liczby: %d\n", i + 1);
//pobranie wartosci od uzytkowanika za pomoca komendy scanf oraz przypisanie jej do zmiennej
    scanf("%d", &wartLicz);
//wykoanie operacji arytmetycznej na zmiennych oraz przisanie do zmiennej
    suma = suma + wartLicz;
  }
//zwrocenie wyniku w return  
  return suma;
}
