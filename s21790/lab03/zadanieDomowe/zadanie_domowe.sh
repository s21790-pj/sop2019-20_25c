#!/bin/bash

#wyrazenie regularne do imion
# [A-ZŁŚŻ]{1}+[a-ząćęłńóśźż]+

#wyrazenie regularne do kodu pocztowego
#[0-9]{2}-[0-9]{3}\b

#wyrazenie regularne do e-mail'a
#^[!-?A-}]+@[!-?A-}]+\.[!-?A-}]{2,5}\b


REGEX_IMIE='[A-ZŁŚŻ]{1}+[a-ząćęłńóśźż]+'

REGEX_KOD='[0-9]{2}-[0-9]{3}\b'

REGEX_EMAIL='[a-zA-Z!-?]+@[a-zA-Z!-?!-?]+\.[a-zA-Z!-?!-?]{2,5}\b'

if [[ ${1} =~ ${REGEX_IMIE} ]]; then
  echo "imię"
fi

if [[ ${1} =~ ${REGEX_KOD} ]]; then
  echo "kod pocztowy"
fi

if [[ ${1} =~ ${REGEX_EMAIL} ]]; then
  echo "email"
fi
