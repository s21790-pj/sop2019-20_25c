#!/bin/bash

#sprawdzenie ifem czy plik istnieje | -e instrukcja zwracajaca true jezeli podany plik istnieje
#${PWD} - wyznacza sciezke gdzie znajduje sie skrypt dalsza czesc /config.cfg sprawdza dokladnie ten plik
if [[ -e ${PWD}/config.cfg ]]
#jezeli if zwraca true wykonuje plik podany w instrukcji
then
  ${PWD}/config.cfg
#kolejny warunek sprawdzajacy czy podane argumety sa wieksze niz 0 oraz czy w aktualnym katalogu
#znajduje sie plik podany w argumencie
# -gt - greater than
# -e exist
elif [[ $# -gt 0 ]] && [[ -e ${PWD}/$1 ]]
#jezeli oba warunki daja true wykonany jest plik podany w argumencie
then
  ${PWD}/$1
#jezeli warunek/warunki zwracaja false wykonwany jest blok instrukcji po else
else
#wyswietla tekst za poomoca komendy echo
  echo "Blad"
#fi - konczy blok instrukcji if
fi
