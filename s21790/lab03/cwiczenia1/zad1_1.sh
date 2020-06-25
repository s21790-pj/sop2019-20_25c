#!/bin/bash

#sprawdzenie ifem czy ilosc argumentow jest wieksza niz 1
# $# - okresla ilosc argumentow
# -gt greater than warunek w ifie
if [[ $# -gt 1 ]]
#jezeli prawda wypelnia instrukcje z then
then
  echo "${1}"
#jezeli warunek nie jest spelniony wykonuje instrukcje z else
else
  echo "Nie podano argumentu"
#fi - konczy blok if
fi
