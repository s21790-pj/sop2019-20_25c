#!/bin/bash

for ((i = 10; i > 1; i-=2));
do
  echo "$i";
  if [[ $i -eq 2 ]]
  then
    echo $(($i-1))
  fi
done
