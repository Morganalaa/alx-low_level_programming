#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rc create_static_lib.sh *.o
