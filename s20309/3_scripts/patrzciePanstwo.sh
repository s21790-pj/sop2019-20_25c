#!/bin/bash

filesList=$(ls -1)
IFS=$'\n'

for i in $filesList; do
    echo "Patrzcie Państwo, oto plik: $i"
done