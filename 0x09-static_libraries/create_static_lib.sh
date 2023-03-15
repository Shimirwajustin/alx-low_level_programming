#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
git add .
git commit -m 'library'
git push
