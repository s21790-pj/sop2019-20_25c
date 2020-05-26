#!/bin/bash

file="$(basename $0)"
if [ "${file##*.}" = "sh" ]; then
echo "File '${file}' has the .sh extension"
else 
mv  $0 ${0}.sh
fi
