#!/bin/bash

FILE_NAME="$(basename $0)"
NAME="${FILE_NAME%.*}"
EXTENSION="${FILE_NAME##*.}"

echo "Filename: ${FILE_NAME}"
echo "Name: ${NAME}"
echo "Extension: ${EXTENSION}"

if [[ "${EXTENSION}" != "sh" ]]
then
  mv ${0} ${0}.sh
  echo "plik został zmieniony na plik z rozszerzeniem .sh"
else
  echo "plik posiada rozszerzenie .sh"
fi
