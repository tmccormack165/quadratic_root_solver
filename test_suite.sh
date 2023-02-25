#!/bin/bash


GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

g++ quadratic_formula.cpp -o a.out

# TEST CASE 1 (a=1, b=0, c=0)
a=1
b=0
c=0

OUTPUT=$(./a.out $a $b $c)

TC1="root 1: 0"

if [ "$OUTPUT" = "$TC1" ]; then
  printf "TEST-CASE #1 ${GREEN}PASSED${NC} \n"
else
  printf "TEST-CASE #1 ${GREEN}FAILED${NC}"
fi

# TEST CASE 2 (a=6, b=2, c=2.5)
a=6
b=2
c=2.5

OUTPUT=$(./a.out $a $b $c)

TC2="ROOTS DO NOT EXIST"

if [ "$OUTPUT" = "$TC2" ]; then
  printf "TEST-CASE #2 ${GREEN}PASSED${NC} \n"
else
  printf "TEST-CASE #2 ${GREEN}FAILED${NC}"
fi

exit 0
