#!/bin/bash

file= "/extension.sh"
if [ "${file##*.}" = "sh" ]; then
echo "File '${file}' has the .sh extension"
else 
mv  $0 $0.sh
fi





