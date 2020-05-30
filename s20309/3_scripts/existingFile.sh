#!/bin/bash

file="/kroliczek.sh"
if [ ! -f "$PWD/$file" ]
then
    echo "$0: File '${file}' not found."
else 
	
exec ./$file

fi