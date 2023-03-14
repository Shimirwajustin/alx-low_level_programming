#!/bin/bash

gcc wall -pedatemoc -werror -wextra -c *.c

ar -rc liball.a *.o

ranlib liball.a
