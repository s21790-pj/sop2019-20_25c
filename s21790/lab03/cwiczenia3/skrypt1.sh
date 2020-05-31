#!/bin/bash

read -p "Podaj tekst do wyswietlenia: " tekst
echo -e "Wybierz kolor wyswietlanego tekstu:\n
31 - \033[31mczerwony\e[0m \n
32 - \033[32mzielony\e[0m \n
33 - \033[33mzolty\e[0m \n
34 - \033[34mniebieski\e[0m \n
35 - \033[35mfioletowy\e[0m \n
36 - \033[36mniebieskozielony\e[0m"

read -p "Numer koloru: " kolor

function f1 () {
  echo -e "\033["${kolor}"m"${tekst}"\e[0m"
}

f1 "${tekst}" "${kolor}"
