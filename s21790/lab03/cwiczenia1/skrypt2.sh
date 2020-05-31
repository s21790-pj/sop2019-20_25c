#!/bin/bash

if [[ -e ${PWD}/config.cfg ]]
then
  ${PWD}/config.cfg
elif [[ $# -gt 0 ]] && [[ -e ${PWD}/$1 ]]
then
  ${PWD}/$1
else
  echo "Blad"
fi
