/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32d -mmemcpy-strategy=scalar" } */

#include "cpymem-strategy.h"

/* { dg-final { scan-assembler-times {call\tmemcpy} 1 } } */
