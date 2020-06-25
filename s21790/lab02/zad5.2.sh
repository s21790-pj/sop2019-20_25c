#!/bin/bash

echo "Pierwszy znak argumentu:"
#wyswietla pierwszy znak argumentu
echo "${1}" | cut -c -1
echo "Ostatni znak argumentu:"
#wyswietla ostatni znak argumentu
echo "${1: -1}"
echo "Zamieniony tekst:"
#wyswietla wprowadzone argumety, zamieniajac slowo "SOP" na "SOP" w kolorze zielony poprzez uzycie sed
esc=$(printf '\033')
echo "${@}" | sed "s,SOP,${esc}[32m&${esc}[0m,"
