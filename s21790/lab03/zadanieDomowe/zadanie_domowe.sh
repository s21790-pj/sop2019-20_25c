#!/bin/bash

#wyrazenie regularne do imion
# [A-ZŁŚŻ]{1}+[a-ząćęłńóśźż]+

#wyrazenie regularne do kodu pocztowego
#[0-9]{2}-[0-9]{3}\b

#wyrazenie regularne do e-mail'a
#[a-zA-Z!-?]+@[a-zA-Z!-?!-?]+\.[a-zA-Z!-?!-?]{2,5}\b

#przypisanie do zmiennej wyrazenia regularnego do imion
REGEX_IMIE='[A-ZŁŚŻ]{1}+[a-ząćęłńóśźż]+'

#przypisanie do zmiennej wyrazenia regularnego do kodu pocztowego
REGEX_KOD='[0-9]{2}-[0-9]{3}\b'

#przypisanie do zmiennej wyrazenia regularnego do email'a
REGEX_EMAIL='[a-zA-Z!-?]+@[a-zA-Z!-?!-?]+\.[a-zA-Z!-?!-?]{2,5}\b'

#warunek sprwadzajacy czy argument przekazany do skryptu to imie
if [[ ${1} =~ ${REGEX_IMIE} ]]; then
  echo "imię"
#fi - zakocznie bloku instrukcji do if
fi

#warunek sprwadzajacy czy argument przekazany do skryptu to kod pocztowy
if [[ ${1} =~ ${REGEX_KOD} ]]; then
  echo "kod pocztowy"
#fi - zakocznie bloku instrukcji do if
fi

#warunek sprwadzajacy czy argument przekazany do skryptu to email
if [[ ${1} =~ ${REGEX_EMAIL} ]]; then
  echo "email"
#fi - zakocznie bloku instrukcji do if
fi
