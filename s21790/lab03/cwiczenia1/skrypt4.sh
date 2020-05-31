#!/bin/bash

FILES_NUMBER=$(ls -1p | grep -vc /)

if [[ ${FILES_NUMBER} -gt 5 ]]
then
  echo "w folderze znajduje sie wiecej niz 5 plikow"
else
  echo "w folderze znajduje sie mniej niz 5 plikow"
fi
