#!/bin/bash

echo "Pierwszy znak argumentu:"
echo "${1}" | cut -c -1
echo "Ostatni znak argumentu:"
#str="${1}"
echo "${1: -1}"
echo "-------------"
echo -e "\e[32mSOP\e[0m"
echo "-------------"
echo "Zamieniony tekst:"
esc=$(printf '\033')
echo "${@}" | sed "s,SOP,${esc}[32m&${esc}[0m,"
