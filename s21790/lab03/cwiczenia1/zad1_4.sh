#!/bin/bash
#przypisanie do zmiennej ilosci plikow  w katalogu
#ls -1 wyswietla pliki w katalogu w pojedynczych liniach
#grep -vc /- zamiast wyswietlac linie ze znalzionym fragmentem wyswietla liczbe znalezionych linii
# -v -negacja zapytania
# / znak nowej linii
ILOSC_PLIKOW=$(ls -1 | grep -vc /)

#sprawdzenie if czy ilosc plikow jest wieksza niz 5 poprzez warunek -gt greater than
if [[ ${ILOSC_PLIKOW} -gt 5 ]]
#jezeli true to wykonwany jest blok instrukcji po then
then
  echo "w folderze znajduje sie wiecej niz 5 plikow"
#jezeli false to wykonwany jest blok instrukcji po else
else
  echo "w folderze znajdueje sie mniej niz 5 plikow"
#fi - konczy blok instrukcji if
fi
