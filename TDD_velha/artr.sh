#!/bin/bash

make
./testa_velha
make valgrind
make cpplint
make gcov
make check
