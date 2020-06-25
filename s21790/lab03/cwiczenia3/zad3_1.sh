
#!/bin/bash

#read odczytanie pojedynczego wiersza ze standardowego wejscia i przypisanie do zmiennej
#-p przy read pozwala na wyswietlenie tekstu przed wprowadzeniem
read -p "Podaj tekst do wyswietlenia: " tekst
#wyswietlenie tekstu poprzez komende echo z opcja -e pozwalajaca na interpretacje znakow specjalnych
echo -e "Wybierz kolor wyswietlanego tekstu:\n
31 - \033[31mczerwony\e[0m \n
32 - \033[32mzielony\e[0m \n
33 - \033[33mzolty\e[0m \n
34 - \033[34mniebieski\e[0m \n
35 - \033[35mfioletowy\e[0m \n
36 - \033[36mniebieskozielony\e[0m"

#read odczytanie pojedynczego wiersza ze standardowego wejscia i przypisanie do zmiennej
#-p przy read pozwala na wyswietlenie tekstu przed wprowadzeniem
read -p "Numer koloru: " kolor

#zadeklarowanie funkcji f1
function f1 () {
#blok instrukcji funkcji
  echo -e "\033["${kolor}"m"${tekst}"\e[0m"
#zakonczenie bloku instrukcji
}

#wywolanie funkcji
f1 "${tekst}" "${kolor}"
