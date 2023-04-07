#!/bin/bash
gcc -c *.c
ar rcs liball.a
ar rcs liball.a *.o
ar -t liball.a
