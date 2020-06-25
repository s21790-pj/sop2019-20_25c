#!/bin/bash

#przypisanie do zmiennej komendy ls -1 ktora wyswietla pliki
PLIKI=$(ls -1)

#zainicjowanie petli przechodzacej po wszystkich linijkach wyswietlonych plikow
for i in ${PLIKI}
do
  echo "Patrzcie Państwo, oto plik: ${i}"
done
