#!/bin/bash

fibbo() {
pyk=$1

if (( pyk<= 1 ))
 then echo 0
elif (( pyk == 2 ))
 then echo 1
else
  echo $(( $(fibbo $((pyk - 1)) ) + $(fibbo $((pyk - 2)) ) )) 
fi
 }
echo fibbonacci number $1 is $(fibbo $1)





