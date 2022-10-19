#!/bin/sh
main=$(find . -name '*main.c')
compileable=$(find ex*/ -name '*.c')
cc $main $compileable
./a.out
