#1/bin/bash

#przypisanie nazwy pliku do zmiennej poprzez polecenie basename z argumentem $0
#basename polecenie sluzace do wyswietelnia ostatniego skladnika sciezki
#$0 zwraca pierwszy argument
NAZWA_PLIKU="$(basename $0)"

#sprawdzeniem ifem czy 3 ostatnie litery w nazwie pliku to .sh
if [[ ${NAZWA_PLIKU: -3} == ".sh" ]]
#jezeli true to wykonwany jest blok instrukcji po then
then
  echo "plik z rozszereziem sh"
else
#poleceniem mv zmieniamy nazwe pliku
  mv ${NAZWA_PLIKU} ${NAZWA_PLIKU}.sh
  echo "plik zostal zmieniony na plik z rozszereziem .sh"
#fi - konczy blok instrukcji if
fi
