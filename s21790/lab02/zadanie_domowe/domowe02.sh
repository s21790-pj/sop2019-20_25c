#!/bin/bash

#wysietla zawartosc pliku podanego jako argument, poprzez grep wypaluje wystapienia podanego slowa
#funkcja --color zmienia kolor danego slowa na czerwony
cat ${1} | grep --color "Kamil"
