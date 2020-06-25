#!/bin/bash

#zaincjowanie funkcji fib
fib()
{
#przpisanie do zmiennej argumentu przekazanego do skryptu
ind=$1

#rozpoczecie if
if (( ind <= 1 ))
#jezeli warunek true wykonanie instrukcji w then
 then echo 0
#kolejny warunek
elif (( ind == 2 ))
#jezeli warunek true wykonanie instrukcji w then
 then echo 1
#jezeli warunek false wykonanie bloku instrukcji po else
else
  echo $(( $(fib $((ind - 1)) ) + $(fib $((ind - 2)) ) ))
#fi - zakoczenie if
fi
#zakonczenie bloku instrukcji do funkcji fib
 }
#wyswietlenie tekstu z wynikiem funkcji fib
echo fibbonacci sequence number $1 is $(fib $1)
