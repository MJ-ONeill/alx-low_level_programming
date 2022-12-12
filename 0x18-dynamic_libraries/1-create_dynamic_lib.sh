#!/bin/bash

gcc -Wall -Werror -pedantic -Wextra -fPIC *.c -shared -o liball.so
