#!/bin/bash
gcc -wall -Wextra -Werror -pedantic -c *.c
ar rc liall.a *.o
