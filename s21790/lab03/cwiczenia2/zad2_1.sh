#!/bin/bash

#zainicjowanie petli odliczajacej od 10 do > 1 co 2
for ((i = 10; i > 1; i -= 2));
#wykonanie bloku instuckji w petli
do
#wyswietlenie wartosci i poprzez komende echo
  echo "$i";
#warunek sprwadzajaczy czy wartosc i = 2
  if [[ $i -eq 2 ]]
#jezeli true wartosc i zmieniszana jest o 1
  then
#wyswietlenie wartosci i
    echo $(($i - 1))
#fi - konczy blok instrukcji if
  fi
#zakonczenie bloku instruckji petli
done
