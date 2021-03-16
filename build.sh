#!/bin/bash

gcc -Wall -Werror -Wextra -std=c99 -pedantic *c tests/test.c -o tests/t_printf
