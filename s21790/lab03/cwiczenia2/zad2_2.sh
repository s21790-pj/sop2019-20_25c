#!/bin/bash

#zainicjowanie petli przechodzacej przez wszystkie argumenty przekazane do skryptu
#zmienna $@ przechowuje wszystkie parametry przekazane do skryptu
for i in "$@"
#wykonanie bloku instuckji w petli
do
#wyswietlenie wartosci i poprzez komende echo
  echo "${i}"
#zakonczenie bloku instruckji petli
done
