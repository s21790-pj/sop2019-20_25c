#!/bin/bash
filesList=$(ls -l)
IFS=$'\n'                                 
for a in $filesList; do
fileName = "${a%*.}"

if ["${a##*.}" = "c" ]; then
 cc $a -o $fileName
fi
done

