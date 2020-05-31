#!/bin/bash

FILES=$(ls -1)
IFS=$'\n'
for i in ${FILES}
do
  echo "Patrzcie Państwo, oto plik: ${i}"
done
