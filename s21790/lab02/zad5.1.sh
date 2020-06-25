#!/bin/bash

#skrypt przyjmuje zmienna jako argument i wyswietla w odpowiedniej formie
#poprzez modyfikacje z uzyciem sed

echo "${1} ma kota, a kot ma ${1}" | sed s/a$/ę/g | sed 's/\([^ę]\)$/\1a/g'
